import os
import re

def extract_and_replace_glyph_bitmap(c_file):
    with open(c_file, 'r', encoding='utf8') as f:
        content = f.read()

    # 1. 匹配原始glyph_bitmap数组并提取数据
    pattern = re.compile(
        r'(static\s+LV_ATTRIBUTE_LARGE_CONST\s+const\s+uint8_t\s+glyph_bitmap\[\][\s\S]*?=\s*\{)([\s\S]*?)(\};)',
        re.MULTILINE
    )
    m = pattern.search(content)
    if not m:
        print(f"No glyph_bitmap[] found in {c_file}")
        return False

    array_content = m.group(2)

    # --- 数据提取部分 ---
    hex_bytes = []
    for line in array_content.split('\n'):
        line = line.split('/*')[0]   # 去掉 /* ... 注释
        values = re.findall(r'0x[0-9a-fA-F]+|\d+', line)
        for v in values:
            value = int(v, 16) if v.startswith('0x') else int(v)
            hex_bytes.append(value)

    # --- 写出bin文件 ---
    basename = os.path.splitext(os.path.basename(c_file))[0]
    macro_name = f"{basename.upper()}_GLYPH_BITMAP_BIN"
    bin_filename = f"{basename}_glyph_bitmap.bin"
    with open(bin_filename, 'wb') as binf:
        binf.write(bytearray(hex_bytes))

    # 2. 移除所有已生成的 static LV_ATTRIBUTE_LARGE_CONST uint8_t *glyph_bitmap = ... 行
    pattern_pointer = re.compile(
        r'^\s*static\s+LV_ATTRIBUTE_LARGE_CONST\s+uint8_t\s*\*\s*glyph_bitmap\s*=\s*[A-Z0-9_]+;\s*/\*\s*bin file extracted\s*\*/\s*\n?',
        re.MULTILINE)
    content = pattern_pointer.sub("", content)

    # 3. 删除原始数组定义
    content = content[:m.start()] + content[m.end():]

    # 4. 自动替换或插入 font_dsc 结构体的 .glyph_bitmap 字段
    # font_dsc结构体初始化的主正则（支持LVGL 8/9等条件复杂场景）
    dsc_pattern = re.compile(
        r'(static\s+(?:const\s+)?lv_font_fmt_txt_dsc_t\s+font_dsc\s*=\s*\{)([\s\S]*?)(\};)',
        re.MULTILINE
    )
    m_dsc = dsc_pattern.search(content)
    if m_dsc:
        dsc_head = m_dsc.group(1)
        dsc_body = m_dsc.group(2)
        dsc_tail = m_dsc.group(3)

        gb_pattern = re.compile(r'(\.glyph_bitmap\s*=\s*)([^,]+)(,)', re.MULTILINE)
        if gb_pattern.search(dsc_body):
            # 替换已有glyph_bitmap字段
            dsc_body_new = gb_pattern.sub(
                r'.glyph_bitmap = %s,' % macro_name, dsc_body, count=1)
        else:
            # 插入到第一个字段前面（保持格式美观）
            dsc_body_new = re.sub(r'^(\s*)', r'\1    .glyph_bitmap = %s,\n' % macro_name, dsc_body, count=1)
        content = content[:m_dsc.start()] + dsc_head + dsc_body_new + dsc_tail + content[m_dsc.end():]
        print(f"--> Modified font_dsc.glyph_bitmap in {c_file}")
    else:
        print(f"WARNING: font_dsc struct not found in {c_file}")
        # 若未找到，可根据实际需求插入代码或跳过

    # --- 保存修后的C文件 ---
    with open(c_file, 'w', encoding='utf8') as f:
        f.write(content)

    print(f"Processed {c_file}, bin: {bin_filename}, macro: {macro_name}")
    return True

def main():
    for f in os.listdir('.'):
        if f.endswith('.c'):
            extract_and_replace_glyph_bitmap(f)

if __name__ == '__main__':
    main()
