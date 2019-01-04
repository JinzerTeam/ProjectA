set UE4_ROOT=C:\Pirates\UnrealEngine\
set PROJECT_FILE=%cd%\TestUE4.uproject
set ARCHIVED_DIR=E:/android_version/TestUE4
set Texture_Compress=ETC2




%UE4_ROOT%Engine/Build/BatchFiles/RunUAT.bat -ScriptsForProject="%PROJECT_FILE%" BuildCookRun -nocompileeditor -nop4 -project="%PROJECT_FILE%" -cook -stage -archive -archivedirectory="%ARCHIVED_DIR%" -package -clientconfig=Development ue4exe=UE4Editor-Cmd.exe -compressed -SkipCookingEditorContent -pak -prereqs -nodebuginfo -targetplatform=Android -cookflavor=%Texture_Compress% -build -CrashReporter -utf8output -compile

pause