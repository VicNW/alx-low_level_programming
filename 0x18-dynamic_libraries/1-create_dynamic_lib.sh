#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC *.c || gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
