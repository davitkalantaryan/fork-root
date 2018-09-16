::
:: File:		wbuild_root_x64.bat
:: Created on:	16 Sep 2018
:: Autor:		Davit Kalantaryan
:: Purpose:		This script compiles root using microsoft compiler
:: Argumet list:This script expects 1 argumets, that shows win32,win64,arm_win
::
:: For first stage no argument is checked for making dicision, what compilation
:: should be done (x86,amd64,arm,...).
:: Now by default for x86-64 will be compiled
::

@ECHO off
SETLOCAL enableextensions

set lsbCodeName=win64
set scriptDir=%~dp0
set currentDir=%cd%

:: checking whether clean is called
set argC=0
for %%x in (%*) do Set /A argC+=1
echo argc=%argC%
if %argC% gtr 0 (
	if "%1" == "clean" (
		rmdir /q /s %scriptDir%%lsbCodeName% 2>nul
		exit /B 0
	)	
)

mkdir %scriptDir%%lsbCodeName% 2>nul
cd %scriptDir%%lsbCodeName%

cmake -G"Visual Studio 15 2017 Win64" ..\..\..\..\original
::cmake -G"Visual Studio 15 2017" ..\..\..\..\original


cd %currentDir%
ENDLOCAL
