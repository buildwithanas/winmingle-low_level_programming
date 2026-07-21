This project is part of the **Winmingle-low-level-programming** curriculum.

## Description
Learning how to use dynamic memory allocation in C using `malloc`, `free`, and related functions.

## Files

| File                        | Description |
|----------------------------|-----------|
| `main.h`                   | Header file with function prototypes |
| `1-strdup.c`               | Duplicates a string (`_strdup`) |
| `2-str_concat.c`           | Concatenates two strings |
| `3-alloc_grid.c`           | Allocates a 2D grid of integers |
| `4-free_grid.c`            | Frees a 2D grid |
| `100-argstostr.c`          | Concatenates all arguments into one string |
| `101-strtow.c`             | Splits a string into words |

## Compilation

All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
