#!/bin/bash
gcc -fPIC -shared -o 100-operations.so *.c
gcc -fPIC -shared -o 100-operations.dll *.c
