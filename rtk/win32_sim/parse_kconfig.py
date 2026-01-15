#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Kconfig Parser - Convert .config to various formats
Supports: CMake config, C header file
"""

import sys
import os
from datetime import datetime

def parse_config(config_file):
    """Parse .config file and return dictionary of config options"""
    config_options = {}
    with open(config_file, 'r', encoding='utf-8') as file:
        for line in file:
            line = line.strip()
            # Skip comments and empty lines
            if line.startswith('#') or not line:
                continue
            # Parse CONFIG_XXX=y or CONFIG_XXX="value"
            if '=' in line:
                key, _, value = line.partition('=')
                key = key.strip()
                value = value.strip()
                # Remove quotes from string values
                if value.startswith('"') and value.endswith('"'):
                    value = value[1:-1]
                config_options[key] = value
    return config_options

def generate_cmake_config(config_options, output_file):
    """Generate CMake configuration file"""
    with open(output_file, 'w', encoding='utf-8') as file:
        file.write("# Automatically generated file; DO NOT EDIT.\n")
        file.write(f"# Generated from .config at {datetime.now()}\n\n")
        
        for key, value in sorted(config_options.items()):
            file.write(f"set({key} {value})\n")
        
        file.write("\n# End of configuration\n")
    print(f"Generated CMake config: {output_file}")

def generate_c_header(config_options, output_file):
    """Generate C header file (autoconf.h style)"""
    with open(output_file, 'w', encoding='utf-8') as file:
        file.write("/* Automatically generated file; DO NOT EDIT. */\n")
        file.write(f"/* Generated from .config at {datetime.now()} */\n\n")
        file.write("#ifndef AUTOCONFIG_H__\n")
        file.write("#define AUTOCONFIG_H__\n\n")
        
        for key, value in sorted(config_options.items()):
            # Convert to C macro
            if value == 'y':
                file.write(f"#define {key} 1\n")
            elif value == 'n':
                file.write(f"/* {key} is not set */\n")
            elif value.isdigit():
                file.write(f"#define {key} {value}\n")
            else:
                # String value
                file.write(f'#define {key} "{value}"\n')
        
        file.write("\n#endif /* AUTOCONFIG_H__ */\n")
    print(f"Generated C header: {output_file}")

def main():
    if len(sys.argv) < 3:
        print("Usage: python parse_kconfig.py <config_file> <output_file> [format]")
        print("  format: cmake (default) or header")
        sys.exit(1)
    
    config_file = sys.argv[1]
    output_file = sys.argv[2]
    output_format = sys.argv[3] if len(sys.argv) > 3 else 'cmake'
    
    if not os.path.exists(config_file):
        print(f"Error: Config file '{config_file}' not found")
        sys.exit(1)
    
    # Parse configuration
    config_options = parse_config(config_file)
    print(f"Parsed {len(config_options)} configuration options")
    
    # Generate output based on format
    if output_format == 'cmake':
        generate_cmake_config(config_options, output_file)
    elif output_format == 'header':
        generate_c_header(config_options, output_file)
    else:
        print(f"Error: Unknown format '{output_format}'")
        sys.exit(1)

if __name__ == "__main__":
    main()
