(-W1 -Za -Ios2 -Ilib -DSTDC_HEADERS -DUSG -DOS2
src\tail.c
)
setargv.obj
os2\textutil.def
out\textutil.lib
out\tail.exe
-AS -LB -S0x8000
