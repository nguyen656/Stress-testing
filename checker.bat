@echo off
echo (C) 2022 nguyentrader.
g++ -g test.cpp -o test.exe
g++ -g sol.cpp -o sol.exe
g++ -g brute.cpp -o brute.exe
for /l %%x in (1, 1, 100) do (
    test > input.txt
    sol < input.txt > output1.txt 
    brute < input.txt > output2.txt
    fc output1.txt output2.txt > diagnostics || exit /b
    echo %%x
)
echo all tests passed
pause