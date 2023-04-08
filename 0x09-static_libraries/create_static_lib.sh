#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ls
ar -rc liball.a *.o
