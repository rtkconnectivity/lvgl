#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Menu Config - Kconfig configuration launcher
Supports both kconfiglib (Python) and kconfig-mconf (native)
"""

import os
import sys
import subprocess

def check_kconfiglib():
    """Check if kconfiglib is installed"""
    try:
        import kconfiglib
        return True
    except ImportError:
        return False

def check_kconfig_mconf():
    """Check if kconfig-mconf.exe exists"""
    return os.path.exists('kconfig-mconf.exe')

def run_menuconfig_kconfiglib():
    """Run menuconfig using kconfiglib"""
    try:
        # Use menuconfig command from kconfiglib
        result = subprocess.run(['menuconfig', 'Kconfig'], check=True)
        return result.returncode == 0
    except FileNotFoundError:
        print("Error: 'menuconfig' command not found")
        print("Install kconfiglib: pip install kconfiglib")
        return False
    except subprocess.CalledProcessError as e:
        print(f"Error running menuconfig: {e}")
        return False

def run_kconfig_mconf():
    """Run menuconfig using kconfig-mconf.exe"""
    try:
        result = subprocess.run(['kconfig-mconf.exe', 'Kconfig'], check=True)
        return result.returncode == 0
    except subprocess.CalledProcessError as e:
        print(f"Error running kconfig-mconf: {e}")
        return False

def generate_config_files():
    """Generate config.cmake and autoconfig.h from .config"""
    if not os.path.exists('.config'):
        print("Warning: .config file not found")
        return False
    
    print("\nGenerating configuration files...")
    
    try:
        # Generate CMake config
        subprocess.run([
            sys.executable, 'parse_kconfig.py',
            '.config', 'config.cmake', 'cmake'
        ], check=True)
        print("✓ Generated config.cmake")
        
        # Generate C header
        subprocess.run([
            sys.executable, 'parse_kconfig.py',
            '.config', 'autoconfig.h', 'header'
        ], check=True)
        print("✓ Generated autoconfig.h")
        
        return True
    except subprocess.CalledProcessError as e:
        print(f"Error generating config files: {e}")
        return False

def main():
    print("=" * 60)
    print("LVGL v9 Win32 Simulator - Configuration Menu")
    print("=" * 60)
    print()
    
    # Check available tools
    has_kconfiglib = check_kconfiglib()
    has_kconfig_mconf = check_kconfig_mconf()
    
    if not has_kconfiglib and not has_kconfig_mconf:
        print("Error: No Kconfig tool found!")
        print()
        print("Please install one of the following:")
        print("  1. kconfiglib (Python): pip install kconfiglib")
        print("  2. kconfig-mconf.exe: Place in current directory")
        print()
        sys.exit(1)
    
    # Run menuconfig
    success = False
    if has_kconfiglib:
        print("Using kconfiglib (Python)...")
        success = run_menuconfig_kconfiglib()
    elif has_kconfig_mconf:
        print("Using kconfig-mconf.exe...")
        success = run_kconfig_mconf()
    
    if not success:
        print("\nConfiguration failed!")
        sys.exit(1)
    
    print("\n✓ Configuration saved to .config")
    
    # Generate config files
    if generate_config_files():
        print("\n" + "=" * 60)
        print("Configuration complete!")
        print("=" * 60)
        print()
        print("Next steps:")
        print("  CMake build: cmake -B build -G \"MinGW Makefiles\"")
        print("  SCons build: scons")
        print()
    else:
        print("\nWarning: Failed to generate some config files")
        sys.exit(1)

if __name__ == "__main__":
    main()
