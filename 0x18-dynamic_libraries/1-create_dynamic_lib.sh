#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -Wextra -c -fPIC *.c && gcc -shared -o liball.so *.o
