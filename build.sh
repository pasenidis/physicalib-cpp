#!/bin/bash

ENTRY_POINT="physica.cpp"
OUTPUT="build"
rm -rf build/
echo "Building driver/testing file. $ENTRY_POINT"
echo "Running g++ to generate PIC"
mkdir $OUTPUT
cd $OUTPUT
for f in ../lib/*.cpp
do
    echo "Compiling $f"
    g++ -c -Wall -Werror -fpic $f
done
for h in *.o
do
    echo "Creating a shared lib"
    g++ -shared -o libphysica${h%.*}.so ${h%.*}.o
done
echo "Driver.."
g++ -L$(pwd) -Wl,-rpath=$(pwd) -Wall -o driver.out ../lib/physica.cpp -lphysicaio -lphysicanewton -lphysicapressure
echo "Built successfully! ✔️"