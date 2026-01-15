import os
import sys

# toolchains options
CROSS_TOOL='gcc'
PLATFORM    = 'gcc'
EXEC_PATH   = r'C:/mingw64/bin'
BSP_LIBRARY_TYPE = None

# toolchains
PREFIX = ''
CC = PREFIX + 'gcc'
AS = PREFIX + 'gcc'
AR = PREFIX + 'ar'
CXX = PREFIX + 'g++'
LINK = PREFIX + 'gcc'
TARGET_EXT = 'elf'
SIZE = PREFIX + 'size'
OBJDUMP = PREFIX + 'objdump'
OBJCPY = PREFIX + 'objcopy'

CPATH = ''
LPATH = ''

# Base compilation flags
CFLAGS_BASE = ' -O0 -g -gdwarf-2 -static-libgcc'

CFLAGS = CFLAGS_BASE + ' -fno-strict-aliasing -std=gnu11'
CXXFLAGS = CFLAGS_BASE + ' -std=c++11'

# Linker flags
LFLAGS = ' -T default.ld'
LFLAGS += ' -flto' #for arm2d
LFLAGS += ' -pthread'
LFLAGS += ' -Wl,-Map=gui.map'

# Post build actions
POST_ACTION = OBJCPY + ' -O binary $TARGET gui.bin\n'
POST_ACTION += SIZE + ' $TARGET \n'
