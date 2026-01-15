#!/bin/bash
# Menuconfig launcher for Linux/WSL

echo "========================================"
echo "LVGL v9 Win32 Simulator Configuration"
echo "========================================"
echo

# Check if menuconfig is available
if ! command -v menuconfig &> /dev/null; then
    echo "Error: menuconfig not found!"
    echo "Please install kconfiglib:"
    echo "  pip install kconfiglib"
    echo
    exit 1
fi

# Run menuconfig
echo "Running menuconfig..."
menuconfig Kconfig

if [ $? -ne 0 ]; then
    echo
    echo "Menuconfig exited with error."
    exit 1
fi

echo
echo "Configuration saved to .config"
echo
echo "Generating build files..."

# Generate CMake config
python3 parse_kconfig.py .config config.cmake cmake
if [ $? -ne 0 ]; then
    echo "Failed to generate config.cmake"
    exit 1
fi

# Generate C header
python3 parse_kconfig.py .config autoconfig.h header
if [ $? -ne 0 ]; then
    echo "Failed to generate autoconfig.h"
    exit 1
fi

echo
echo "Configuration complete!"
echo "You can now run: cmake -B build"
echo
