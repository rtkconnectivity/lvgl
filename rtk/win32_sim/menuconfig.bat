@echo off
REM Menuconfig launcher for Windows

echo ========================================
echo LVGL v9 Win32 Simulator Configuration
echo ========================================
echo.

REM Check if kconfig-mconf.exe exists
if not exist "kconfig-mconf.exe" (
    echo Error: kconfig-mconf.exe not found!
    echo Please ensure kconfig-mconf.exe is in the current directory.
    echo.
    echo You can download it from:
    echo https://github.com/ulfalizer/Kconfiglib
    pause
    exit /b 1
)

REM Run menuconfig
echo Running menuconfig...
kconfig-mconf.exe Kconfig

if errorlevel 1 (
    echo.
    echo Menuconfig exited with error.
    pause
    exit /b 1
)

echo.
echo Configuration saved to .config
echo.
echo Generating build files...

REM Generate CMake config
python parse_kconfig.py .config config.cmake cmake
if errorlevel 1 (
    echo Failed to generate config.cmake
    pause
    exit /b 1
)

REM Generate C header
python parse_kconfig.py .config autoconfig.h header
if errorlevel 1 (
    echo Failed to generate autoconfig.h
    pause
    exit /b 1
)

echo.
echo Configuration complete!
echo You can now run: cmake -B build -G "MinGW Makefiles"
echo.
pause
