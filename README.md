Note: If you don't have the g++ compiler you should download the MinGW C++ compiler from here: https://sourceforge.net/projects/mingw/ , it contains the g++ then add it in the environmnet variables -> system variables scroll for Path then double click it and click New then write C:\MinGW\bin then press OK in all open windows to save the changes, have fun!

# Calc-Library

- In the program directory, open the cmd

# Compile it using

- g++ -c CalcLib.cpp

- g++ main.cpp CalcLib.o -o main.exe

# Run it using

- main.exe (windows)
- ./main (linux)

# Note
- I pushed also the main.exe and CalcLib.o so you can run it directly but it's not guaranteed if you haven't the compiler
- This is an importable library where you can download the CalcLib.cpp and CalcLib.h and add them in your code directory and just type: 
- #include "CalcLib.h" to use it
- And enjoy trying this simple library implemented using variable parameters, Thank you.
