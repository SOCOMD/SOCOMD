set projectDir="C:\Users\seth\Documents\GitHub\SOCOMD"
set output="C:\SOCOMD\@socomd_dev\addons"

start /D %projectDir% makepbo.exe -N -P socomd_main %output%
start /D %projectDir% makepbo.exe -N -P socomd_gcam %output%
start /D %projectDir% makepbo.exe -N -P socomd_asorvs %output%
start /D %projectDir% makepbo.exe -N -P socomd_asorgs %output%
start /D %projectDir% makepbo.exe -N -P socomd_zeus %output%
start /D %projectDir% makepbo.exe -N -P ar_advancedrappelling %output%
start /D %projectDir% makepbo.exe -N -P sa_advancedslingloading %output%