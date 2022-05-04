#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c ar -rc lib:all.a *.o ranlib liball.a

