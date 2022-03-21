#!/bin/bash

gcc -Wall -pedante -Werror -Wextra -fPIC -c*.c
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o