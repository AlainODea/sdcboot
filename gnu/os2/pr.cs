(-W1 -Za -Ios2 -Ilib -DSTDC_HEADERS -DUSG -DOS2
src\pr.c
)
setargv.obj
os2\textutil.def
out\textutil.lib
out\pr.exe
-AS -LB -S0x4000
