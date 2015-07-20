@echo off
call config.bat
rd/s/q %RES_OUT_PATH%
if not exist %RES_OUT_PATH% (
	mkdir %RES_OUT_PATH%
)
rd/s/q %SRC_OUT_PATH%
if not exist %SRC_OUT_PATH% (
	mkdir %SRC_OUT_PATH%
)
xcopy %RES_PATH%\*.* /s %RES_OUT_PATH% /y
xcopy %SRC_PATH%\*.* /s %SRC_OUT_PATH% /y
pause