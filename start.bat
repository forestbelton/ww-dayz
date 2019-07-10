setlocal enabledelayedexpansion

set MODS_FILE=mods.txt
set MODS=

for /F "delims=" %%M in (%MODS_FILE%) do set MODS=!MODS!;%%M

DZSALModServer.exe ^
    -mod=%MODS% ^
    -port=2302 ^
    -config=serverDZ.cfg ^
    -profiles=serverLogs ^
    -adminLog ^
    -netLog ^
    -cpuCount=4 ^
    -freezeCheck

pause
goto :eof

:concat
    set MODS=%MODS%;%1%
    goto :eof
