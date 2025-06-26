import os
import re
import tkinter as tk
from tkinter import messagebox, filedialog

def reverse_bits(byte):
    return int('{:08b}'.format(byte)[::-1], 2)

def reverse_bits_2bpp(byte):
    b = 0
    for i in range(4):
        v = (byte >> (i * 2)) & 0x03
        b |= v << ((3 - i) * 2)
    return b

def reverse_bits_4bpp(byte):
    return ((byte & 0x0F) << 4) | ((byte & 0xF0) >> 4)

def get_bpp_from_file(text):
    match = re.search(r'Bpp:\s*(\d+)', text)
    if match:
        return int(match.group(1))
    raise ValueError("Cannot find Bpp in file.")

def process_glyph_bitmap_block(block, bpp):
    lines = block.split('\n')
    processed = []
    for line in lines:
        if re.match(r'\s*/\*', line):
            processed.append(line)
            continue
        def repl(m):
            s = m.group(0)
            if s.lower().startswith('0x'):
                val = int(s, 16)
                fmt = 'hex'
            else:
                val = int(s)
                fmt = 'dec'
            if bpp == 1:
                newval = reverse_bits(val)
            elif bpp == 2:
                newval = reverse_bits_2bpp(val)
            elif bpp == 4:
                newval = reverse_bits_4bpp(val)
            else:
                newval = val
            if fmt == 'hex':
                case = 'x' if 'x' in s else 'X'
                return f'0x{newval:02{case}}'
            else:
                return str(newval)
        newline = re.sub(r'0x[0-9A-Fa-f]{1,2}|\b\d{1,3}\b', repl, line)
        processed.append(newline)
    return '\n'.join(processed)

def find_glyph_bitmap_bounds(content):
    m = re.search(
        r'(static\s+(?:\w+\s+){0,2}const\s+uint8_t\s+glyph_bitmap\[\]\s*=\s*\{)',
        content,
        re.DOTALL
    )
    if not m:
        return None
    start_idx = m.end(1)
    count = 1
    i = start_idx
    while i < len(content):
        if content[i] == '{':
            count += 1
        elif content[i] == '}':
            count -= 1
            if count == 0:
                end_idx = i
                return (start_idx, end_idx)
        i += 1
    return None

def process_files(input_path, output_path, add_suffix: bool):
    count = 0
    for fname in os.listdir(input_path):
        if not fname.endswith('.c'):
            continue
        if add_suffix and '_lsb' in fname:
            continue
        print(f"Processing {fname} ...")
        in_full = os.path.join(input_path, fname)
        with open(in_full, "r", encoding="utf-8") as f:
            content = f.read()
        try:
            bpp = get_bpp_from_file(content)
        except Exception as e:
            print(f"  Skip {fname}: {e}")
            continue

        pos = find_glyph_bitmap_bounds(content)
        if not pos:
            print(f"  glyph_bitmap array not found in {fname}.")
            continue
        s, e = pos
        before = content[:s]
        block = content[s:e]
        after = content[e:]

        new_block = process_glyph_bitmap_block(block, bpp)
        new_content = before + new_block + after

        base, ext = os.path.splitext(fname)
        if add_suffix:
            new_fname = base + '_lsb' + ext
        else:
            new_fname = fname    # 直接覆盖原文件名

        out_full = os.path.join(output_path, new_fname)
        with open(out_full, 'w', encoding='utf-8') as f:
            f.write(new_content)
        print(f"  Output: {out_full}")
        count += 1
    return count

# ===================== GUI代码 =====================

def set_input_path():
    p = filedialog.askdirectory(initialdir=var_input_path.get() or os.getcwd())
    if p:
        var_input_path.set(p)

def set_output_path():
    p = filedialog.askdirectory(initialdir=var_output_path.get() or os.getcwd())
    if p:
        var_output_path.set(p)

def on_run():
    ipath = var_input_path.get()
    opath = var_output_path.get()
    add_suffix = var_add_suffix.get()
    if not ipath or not os.path.isdir(ipath):
        messagebox.showerror("错误", "输入目录不能为空且必须存在。")
        return
    if not opath or not os.path.isdir(opath):
        messagebox.showerror("错误", "输出目录不能为空且必须存在。")
        return
    if ipath == opath and not add_suffix:
        msg = "输入输出目录相同且未添加后缀，将覆盖原文件。\n\n确定继续吗？"
        if not messagebox.askokcancel("覆盖原文件", msg):
            return
    cnt = process_files(ipath, opath, add_suffix)
    messagebox.showinfo("处理完成", f"处理了 {cnt} 个文件！{'(有新文件生成)' if add_suffix or ipath != opath else '(覆盖原文件)'}")

# == 创建窗口

root = tk.Tk()
root.title("Glyph Bitmap LSB转换器")
root.resizable(False, False)

cwd = os.path.abspath(os.getcwd())

mainfr = tk.Frame(root, padx=15, pady=15)
mainfr.pack()

def label_row(frm, text, var, btncmd):
    row = tk.Frame(frm)
    row.pack(fill='x', pady=(0,3))
    tk.Label(row, text=text).pack(side='left')
    e = tk.Entry(row, textvariable=var, width=45)
    e.pack(side='left', padx=3)
    tk.Button(row, text='选择', command=btncmd).pack(side='left')
    return e

var_input_path = tk.StringVar(value=cwd)
var_output_path = tk.StringVar(value=cwd)
var_add_suffix = tk.BooleanVar(value=True)

label_row(mainfr, "输入目录：", var_input_path, set_input_path)
label_row(mainfr, "输出目录：", var_output_path, set_output_path)

tk.Checkbutton(
    mainfr,
    text="输出文件名添加 _lsb 后缀（跳过已带_lsb的文件；否则覆盖同名文件）",
    variable=var_add_suffix
).pack(anchor='w', pady=(5,10))

run_btn = tk.Button(mainfr, text="开始处理C文件", width=37, command=on_run)
run_btn.pack(pady=(0,7))

tips = ("提示：\n"
        "- 默认输入输出路径为本脚本所在路径。\n"
        "- 添加后缀模式下，只输出_lsb新文件，已_lsb文件不处理。\n"
        "- 若输入输出目录相同且不加后缀，将直接覆盖原文件。")
tk.Label(mainfr, text=tips, fg="#222", justify="left").pack()

root.mainloop()
