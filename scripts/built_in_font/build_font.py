import tkinter as tk
from tkinter import filedialog, messagebox
import os
import subprocess
import ntpath
import sys

BASE_DIR = getattr(sys, '_MEIPASS', os.path.dirname(os.path.abspath(__file__)))
exe_path = os.path.join(BASE_DIR, "lv_font_conv-win.exe")

def get_autoname(font, size, bpp, compressed, byte_align, subpx, prefilter):
    fname = ntpath.basename(font)
    basename, ext = os.path.splitext(fname)
    name = f"{basename}_size{size}_bpp{bpp}"
    if compressed:
        name += "_c"
    if byte_align:
        name += "_a"
    if subpx:
        name += "_s"
    if prefilter:
        name += "_p"
    name += ".c"
    return name

def run_cmd():
    size = entry_size.get()
    bpp = entry_bpp.get()
    range_val = entry_range.get()
    symbols = entry_symbols.get()
    font = entry_font.get()
    outputdir = entry_outputdir.get()
    compressed = var_compressed.get()
    subpx = var_subpx.get()
    byte_align = var_byte_align.get()
    prefilter = var_prefilter.get()
    custom = entry_custom_filename.get().strip()

    if not size or not bpp or not font or not outputdir:
        messagebox.showerror("Error", "Please fill in font size, bpp, font file and output directory")
        return

    # 优先自定义文件名
    if custom:
        outname = custom
        if not outname.lower().endswith('.c'):
            outname += '.c'
    else:
        outname = get_autoname(font, size, bpp, compressed, byte_align, subpx, prefilter)
    output = os.path.join(outputdir, outname)

    compr = ""
    if not compressed:
        compr += "--no-compress "
    if not prefilter:
        compr += "--no-prefilter "

    subpx_flag = "--lcd" if subpx else ""
    byte_align_flag = "--byte-align" if byte_align else ""
    symbols_flag = f"--symbols {symbols}" if symbols.strip() else ""

    cmd = (
        f'"{exe_path}" {subpx_flag} {byte_align_flag} {compr} --bpp {bpp} --size {size} '
        f'--font "{font}" -r {range_val} {symbols_flag} '
        f'--format lvgl -o "{output}" --force-fast-kern-format'
    )

    print("cmd:", cmd)
    try:
        result = subprocess.run(cmd, shell=True, capture_output=True, text=True)
        if result.returncode == 0:
            messagebox.showinfo("Success", f"Font generated successfully!\nOutput: {output}")
        else:
            messagebox.showerror("Error", f"Command execution failed:\n{result.stderr or result.stdout}")
    except Exception as e:
        messagebox.showerror("Exception", str(e))

def select_font():
    filename = filedialog.askopenfilename(filetypes=[("TTF/OTF/WOFF Files", "*.ttf;*.otf;*.woff"), ("All Files", "*.*")])
    if filename:
        entry_font.delete(0, tk.END)
        entry_font.insert(0, filename)
        entry_outputdir.delete(0, tk.END)
        entry_outputdir.insert(0, os.path.dirname(filename))
        update_filename_preview()

def select_outputdir():
    folder_selected = filedialog.askdirectory()
    if folder_selected:
        entry_outputdir.delete(0, tk.END)
        entry_outputdir.insert(0, folder_selected)

def update_filename_preview(*args):
    custom = entry_custom_filename.get().strip()
    font = entry_font.get()
    size = entry_size.get()
    bpp = entry_bpp.get()
    compressed = var_compressed.get()
    byte_align = var_byte_align.get()
    subpx = var_subpx.get()
    prefilter = var_prefilter.get()
    if custom:
        name = custom
        if not name.lower().endswith('.c'):
            name += '.c'
        lbl_filename_preview.config(text=f"Output filename: {name}")
    elif font and size and bpp:
        name = get_autoname(font, size, bpp, compressed, byte_align, subpx, prefilter)
        lbl_filename_preview.config(text=f"Output filename: {name}")
    else:
        lbl_filename_preview.config(text="Output filename:")

root = tk.Tk()
root.title("LVGL Font Generator")

tk.Label(root, text="font size:").grid(row=0, column=0, sticky='e')
entry_size = tk.Entry(root)
entry_size.grid(row=0, column=1)
entry_size.insert(0, "16")
entry_size.bind("<KeyRelease>", update_filename_preview)

tk.Label(root, text="Bpp (1/2/4/8):").grid(row=1, column=0, sticky='e')
entry_bpp = tk.Entry(root)
entry_bpp.grid(row=1, column=1)
entry_bpp.insert(0, "4")
entry_bpp.bind("<KeyRelease>", update_filename_preview)

tk.Label(root, text="Unicode -r:").grid(row=2, column=0, sticky='e')
entry_range = tk.Entry(root)
entry_range.grid(row=2, column=1)
entry_range.insert(0, "0x20-0x7F")

tk.Label(root, text="symbols:").grid(row=3, column=0, sticky='e')
entry_symbols = tk.Entry(root)
entry_symbols.grid(row=3, column=1)

tk.Label(root, text="font file:").grid(row=4, column=0, sticky='e')
entry_font = tk.Entry(root, width=32)
entry_font.grid(row=4, column=1)
entry_font.bind("<KeyRelease>", update_filename_preview)
tk.Button(root, text="Browse", command=select_font).grid(row=4, column=2)

tk.Label(root, text="Output dir:").grid(row=5, column=0, sticky='e')
entry_outputdir = tk.Entry(root, width=32)
entry_outputdir.grid(row=5, column=1)
tk.Button(root, text="Select Folder", command=select_outputdir).grid(row=5, column=2)

# ==== 新增自定义文件名输入框 ====
tk.Label(root, text="Custom filename:").grid(row=6, column=0, sticky='e')
entry_custom_filename = tk.Entry(root, width=32)
entry_custom_filename.grid(row=6, column=1, columnspan=2, sticky='w')
entry_custom_filename.bind("<KeyRelease>", lambda e: update_filename_preview())
# ==============================

var_compressed = tk.BooleanVar(value=False)
var_byte_align = tk.BooleanVar(value=True)
var_subpx = tk.BooleanVar(value=False)
var_prefilter = tk.BooleanVar(value=False)

def update_filename_from_check(*args):
    update_filename_preview()

tk.Checkbutton(root, text="compressed", variable=var_compressed, command=update_filename_from_check).grid(row=7, column=1, sticky='w')
tk.Checkbutton(root, text="Byte align", variable=var_byte_align, command=update_filename_from_check).grid(row=7, column=2, sticky='w')
tk.Checkbutton(root, text="Subpixel", variable=var_subpx, command=update_filename_from_check).grid(row=7, column=3, sticky='w')
tk.Checkbutton(root, text="Prefilter", variable=var_prefilter, command=update_filename_from_check).grid(row=7, column=4, sticky='w')

lbl_filename_preview = tk.Label(root, text="Output filename:")
lbl_filename_preview.grid(row=8, column=0, columnspan=5, sticky='w', pady=(6, 2))

tk.Button(root, text="Genarate", command=run_cmd, bg="#44CC44", fg="#fff").grid(row=9, column=0, columnspan=5, pady=14)

# 自定义文件名的初值和默认预览
entry_custom_filename.insert(0, "")
update_filename_preview()

root.mainloop()
