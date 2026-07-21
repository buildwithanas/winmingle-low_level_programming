#!/bin/bash

# Compile all .c files
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

# Create the static library
ar -rc liball.a *.o

# Index it
ranlib liball.a#!/bin/bash

# Compile all .c files
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

# Create the static library
ar -rc liball.a *.o

# Index it
ranlib liball.a
