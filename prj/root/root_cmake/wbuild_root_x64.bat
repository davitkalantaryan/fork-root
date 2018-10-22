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

set modifiedPrjs=%scriptDir%..\..\..\prj\root\modified_projects_vs17
set modifiedPrjsTargetBase=%scriptDir%..\..\..\prj\root\root_cmake\%lsbCodeName%

cmake -G"Visual Studio 15 2017 Win64"  -Thost=x64 ..\..\..\..\original
copy %scriptDir%..\..\..\src\copy\G__Core.cxx %scriptDir%..\..\..\root_cmake\win64\core\base\.
copy %modifiedPrjs%\LLVMSupport.vcxproj %modifiedPrjsTargetBase%\interpreter\llvm\src\lib\Support\.
copy %modifiedPrjs%\obj.clingUtils.vcxproj %modifiedPrjsTargetBase%\interpreter\llvm\src\tools\cling\lib\Utils\.
copy %modifiedPrjs%\Dictgen.vcxproj %modifiedPrjsTargetBase%\core\dictgen\.
copy %modifiedPrjs%\clangDriver.vcxproj %modifiedPrjsTargetBase%\interpreter\llvm\src\tools\clang\lib\Driver\.
copy %modifiedPrjs%\TextInput.vcxproj %modifiedPrjsTargetBase%\core\textinput\.
copy %modifiedPrjs%\Winnt.vcxproj %modifiedPrjsTargetBase%\core\winnt\.
copy %modifiedPrjs%\Base.vcxproj %modifiedPrjsTargetBase%\core\base\.
copy %modifiedPrjs%\MetaCling.vcxproj %modifiedPrjsTargetBase%\core\metacling\src\.
copy %modifiedPrjs%\ThreadObjs.vcxproj %modifiedPrjsTargetBase%\core\thread\.
copy %modifiedPrjs%\RIOObjs.vcxproj %modifiedPrjsTargetBase%\io\io\.

::cmake -G"Visual Studio 15 2017" ..\..\..\..\original

::devenv ROOT.sln /build Debug /project Core


cd %currentDir%
ENDLOCAL
