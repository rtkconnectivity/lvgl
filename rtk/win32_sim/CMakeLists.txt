#
# Copyright (c) 2026, Realtek Semiconductor Corporation
#
# SPDX-License-Identifier: Apache-2.0
#

cmake_minimum_required (VERSION 3.13)

SET(CMAKE_C_COMPILER gcc)
SET(CMAKE_CXX_COMPILER g++)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS ON) 

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_EXTENSIONS ON)

set(CMAKE_VERBOSE_MAKEFILE OFF)

project(LVGL_Simulator)

# ============================================================================
# Kconfig Integration
# ============================================================================

# Check if .config exists
if(NOT EXISTS "${CMAKE_SOURCE_DIR}/.config")
    message(WARNING ".config file not found. Run 'python menu_config.py' to generate it.")
    message(WARNING "Using default configuration...")
else()
    message(STATUS "Found .config file, parsing configuration...")
    
    # Generate CMake config from .config
    execute_process(
        COMMAND python ${CMAKE_SOURCE_DIR}/parse_kconfig.py 
                ${CMAKE_SOURCE_DIR}/.config 
                ${CMAKE_SOURCE_DIR}/config.cmake
                cmake
        RESULT_VARIABLE result
        ERROR_VARIABLE error_output
        OUTPUT_VARIABLE output
    )
    
    if(result)
        message(FATAL_ERROR "Failed to parse .config: ${error_output}")
    else()
        message(STATUS "Generated config.cmake from .config")
    endif()
    
    # Note: autoconfig.h generation removed - not used in current architecture
    # LVGL uses lv_conf.h instead of Kconfig when LV_KCONFIG_IGNORE is set
    
    # Include generated CMake configuration
    include(${CMAKE_SOURCE_DIR}/config.cmake)
endif()


# ============================================================================
# Platform Detection
# ============================================================================

if(CMAKE_SYSTEM_PROCESSOR STREQUAL "arm")
    message(STATUS "Target processor is ARM.")
    set(PLATFORM_EMBEDDED ON)
else()
	message(STATUS "Target processor is X86.")
	set(PLATFORM_SIMULATOR ON)
endif()

set(GUI_BASE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "Simulator base path: ${GUI_BASE_PATH}")

# ============================================================================
# Configuration-based Compilation Flags
# ============================================================================

# Apply optimization level from Kconfig
if(DEFINED CONFIG_OPTIMIZATION_LEVEL)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O${CONFIG_OPTIMIZATION_LEVEL}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O${CONFIG_OPTIMIZATION_LEVEL}")
    message(STATUS "Optimization level: -O${CONFIG_OPTIMIZATION_LEVEL}")
endif()

# Apply debug mode from Kconfig
if(DEFINED CONFIG_ENABLE_DEBUG AND CONFIG_ENABLE_DEBUG STREQUAL "y")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -gdwarf-2")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -gdwarf-2")
    add_compile_definitions(DEBUG_MODE=1)
    message(STATUS "Debug mode enabled")
endif()

# ============================================================================
# Target Configuration
# ============================================================================

set(GUI_TARGET_NAME gui)

# Check if building as library or executable
if(DEFINED CONFIG_LIB_MODE AND CONFIG_LIB_MODE STREQUAL "y")
    add_library(${GUI_TARGET_NAME} STATIC main.c)
    message(STATUS "Building as static library")
else()
    add_executable(${GUI_TARGET_NAME} main.c)
    message(STATUS "Building as executable")
endif()

# Add include directories
target_include_directories(${GUI_TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR})

# ============================================================================
# Subdirectories
# ============================================================================

add_subdirectory(../lvgl_v9 ${CMAKE_BINARY_DIR}/lvgl_v9)
add_subdirectory(port ${CMAKE_BINARY_DIR}/port)
add_subdirectory(RTE ${CMAKE_BINARY_DIR}/RTE)

# ============================================================================
# SDL2 Library Configuration
# ============================================================================
set(SDL2_LIB_PATH "./RTE/SDL2-2.26.0/x86_64-w64-mingw32/lib")

find_library(SDL2_MAIN_LIB SDL2main PATHS ${SDL2_LIB_PATH})
find_library(SDL2_LIB SDL2 PATHS ${SDL2_LIB_PATH})

target_link_libraries(${GUI_TARGET_NAME} PRIVATE ${SDL2_MAIN_LIB} ${SDL2_LIB})
target_link_libraries(${GUI_TARGET_NAME} PRIVATE opengl32)
target_link_libraries(${GUI_TARGET_NAME} PRIVATE mingw32)

set(CUSTOM_LINKER_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/default.ld")


target_link_options(${GUI_TARGET_NAME} PRIVATE "-Wl,-Map=${GUI_TARGET_NAME}.map")
target_link_options(${GUI_TARGET_NAME} PRIVATE "-T${CUSTOM_LINKER_SCRIPT}")




