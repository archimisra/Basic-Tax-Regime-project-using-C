@echo off
cls
echo Compiling...
gcc "Tax Regimes.c" -o tax.exe
if errorlevel 1 (
    echo Compilation failed.
    pause
    exit /b
)
echo Running program...
tax.exe
echo.
pause
