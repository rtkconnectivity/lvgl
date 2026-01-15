# RT-Thread building script for bridge

# import os
# from building import *

# objs = []
# cwd  = GetCurrentDir()

# objs = objs + SConscript(cwd + '/env_support/rt-thread/SConscript')

# Return('objs')

from building import *
import os

src = []
inc = []
group = []

cwd = GetCurrentDir() # get current dir path

port_src = Glob('*.c')
port_inc = [cwd]
group = group + DefineGroup('LVGL-port', port_src, depend = ['CONFIG_REALTEK_BUILD_LVGL'], CPPPATH = port_inc)

# check if .h or .hpp files exists
def check_h_hpp_exists(path):
    file_dirs = os.listdir(path)
    for file_dir in file_dirs:
        if os.path.splitext(file_dir)[1] in ['.h', '.hpp']:
            return True
    return False

lvgl_cwd = cwd + '/'

lvgl_src_cwd = lvgl_cwd + 'src/'
inc = inc + [lvgl_src_cwd]
src = src + Glob(os.path.join(lvgl_src_cwd,'*.c'))
for root, dirs, files in os.walk(lvgl_src_cwd):
    for dir in dirs:
        current_path = os.path.join(root, dir)
        if current_path == os.path.join(lvgl_src_cwd, 'libs', 'thorvg', 'rapidjson', 'msinttypes'): # exclude the msinttypes folder
            continue
        src = src + Glob(os.path.join(current_path,'*.c')) # add all .c files
        if check_h_hpp_exists(current_path): # add .h and .hpp path
            inc = inc + [current_path]


if GetDepend('CONFIG_LV_BUILD_EXAMPLES'):
    lvgl_src_cwd = lvgl_cwd + 'examples/'
    inc = inc + [lvgl_src_cwd]
    for root, dirs, files in os.walk(lvgl_src_cwd):
        src = src + Glob(os.path.join(root, '*.c'))
        if check_h_hpp_exists(root):
            inc = inc + [root]

if GetDepend('CONFIG_LV_BUILD_DEMOS'):
    lvgl_src_cwd = lvgl_cwd + 'demos/'
    inc = inc + [lvgl_src_cwd]
    for root, dirs, files in os.walk(lvgl_src_cwd):
        src = src + Glob(os.path.join(root, '*.c'))
        if check_h_hpp_exists(root):
            inc = inc + [root]

lite3d_src = []
lite3d_inc = []
libs = []
libpath = []
if GetDepend('CONFIG_REALTEK_BUILD_LVGL_LITE3D'):
    lite3d_src_cwd = lvgl_cwd + 'src/libs/Lite3D/'
    lite3d_inc += [lite3d_src_cwd + '/include']

    if GetDepend('CONFIG_REALTEK_BUILD_LVGL_LITE3D_FOR_WIN32_GCC_LIB'):
        libs = ['Lite3D_GCC']
        libpath = [lite3d_src_cwd + '/lib']
    elif GetDepend('CONFIG_REALTEK_BUILD_LVGL_LITE3D_8773E_ARMCC_LIB'):
        lite3d_src += [lite3d_src_cwd + '/lib/Lite3D_RTL8773E_ARMCC.lib']
    elif GetDepend('CONFIG_REALTEK_BUILD_LVGL_LITE3D_8773E_ARMCL_LIB'):
        lite3d_src += [lite3d_src_cwd + '/lib/Lite3D_RTL8773E_ARMCLANG.lib']
    elif GetDepend('CONFIG_REALTEK_BUILD_LVGL_LITE3D_8773G_ARMCL_LIB'):
        lite3d_src += [lite3d_src_cwd + '/lib/Lite3D_RTL8773G_ARMCLANG.lib']


group = group + DefineGroup('lite3d', lite3d_src, depend=['CONFIG_REALTEK_BUILD_LVGL_LITE3D'], CPPPATH=lite3d_inc, LIBS = libs, LIBPATH = libpath)

ft_src = []
ft_inc = []
ft_def = []
if GetDepend('CONFIG_REALTEK_BUILD_FREETYPE_SRC'):
    ft_inc += [cwd + '/libs/freetype/include']
    ft_src = [
        cwd + "/libs/freetype/src/autofit/autofit.c",
        cwd + "/libs/freetype/src/bdf/bdf.c",
        cwd + "/libs/freetype/src/cff/cff.c",
        cwd + "/libs/freetype/src/dlg/dlgwrap.c",
        cwd + "/libs/freetype/src/base/ftbase.c",
        cwd + "/libs/freetype/src/cache/ftcache.c",
        cwd + "/libs/freetype/src/base/ftdebug.c",
        cwd + "/libs/freetype/src/gzip/ftgzip.c",
        cwd + "/libs/freetype/src/base/ftinit.c",
        cwd + "/libs/freetype/src/lzw/ftlzw.c",
        cwd + "/libs/freetype/src/pcf/pcf.c",
        cwd + "/libs/freetype/src/pfr/pfr.c",
        cwd + "/libs/freetype/src/psaux/psaux.c",
        cwd + "/libs/freetype/src/pshinter/pshinter.c",
        cwd + "/libs/freetype/src/psnames/psmodule.c",
        cwd + "/libs/freetype/src/raster/raster.c",
        cwd + "/libs/freetype/src/sdf/sdf.c",
        cwd + "/libs/freetype/src/sfnt/sfnt.c",
        cwd + "/libs/freetype/src/smooth/smooth.c",
        cwd + "/libs/freetype/src/base/ftmm.c",
        cwd + "/libs/freetype/src/base/ftglyph.c",
        cwd + "/libs/freetype/src/base/ftbitmap.c",
        cwd + "/libs/freetype/src/truetype/truetype.c",
        cwd + "/libs/freetype/src/type1/type1.c",
        cwd + "/libs/freetype/src/cid/type1cid.c",
        cwd + "/libs/freetype/src/type42/type42.c",
        cwd + "/libs/freetype/src/winfonts/winfnt.c",
        cwd + "/libs/freetype/src/svg/ftsvg.c",
        cwd + "/libs/freetype/src/base/ftsystem.c",
    ]

    if GetDepend('CONFIG_FREETYPE_USE_LVGL_PORT'):
        ft_src.remove(cwd + "/libs/freetype/src/base/ftsystem.c")

    ft_def += ['FT2_BUILD_LIBRARY']

group = group + DefineGroup('freetype', ft_src, depend=['CONFIG_REALTEK_BUILD_FREETYPE_SRC'], CPPPATH=ft_inc, CPPDEFINES=ft_def)


Import('PLATFORM')
LOCAL_CFLAGS = ''
if PLATFORM == 'gcc' or PLATFORM == 'armclang': # GCC or Keil AC6
    LOCAL_CFLAGS += ' -std=c99'
elif PLATFORM == 'armcc': # Keil AC5
    LOCAL_CFLAGS += ' --c99 --gnu'

group = group + DefineGroup('LVGL', src, depend = ['CONFIG_REALTEK_BUILD_LVGL'], CPPPATH = inc, LOCAL_CFLAGS = LOCAL_CFLAGS)

list = os.listdir(cwd)
for d in list:
    path = os.path.join(cwd, d)
    if os.path.isfile(os.path.join(path, 'SConscript')):
        group = group + SConscript(os.path.join(d, 'SConscript'))

Return('group')

