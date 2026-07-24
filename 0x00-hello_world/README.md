# C Programming - Preprocessor, Compiler, and Basic Programs

## Description
This repository contains solutions for C programming tasks covering preprocessor directives, compilation process, and basic I/O operations.

## Tasks Overview

### Scripts (Tasks 0-3, 7)
| File | Description | Usage |
|------|-------------|-------|
| `0-preprocessor` | Runs C file through preprocessor | `export CFILE=main.c; ./0-preprocessor` |
| `1-compiler` | Compiles C file without linking | `export CFILE=main.c; ./1-compiler` |
| `2-assembler` | Generates assembly code | `export CFILE=main.c; ./2-assembler` |
| `3-name` | Creates executable named `cisfun` | `export CFILE=main.c; ./3-name` |
| `100-intel` | Generates Intel syntax assembly | `export CFILE=main.c; ./100-intel` |

### C Programs (Tasks 4-6, 8)
| File | Description | Output |
|------|-------------|--------|
| `4-puts.c` | Prints using `puts` | `"Programming is like building a multilingual puzzle` |
| `5-printf.c` | Prints using `printf` | `with proper grammar, but the outcome is a piece of art,` |
| `6-size.c` | Prints data type sizes | Varies by system |
| `101-quote.c` | Prints to stderr using `write` | `and that piece of art is useful" - Dora Korpar, 2015-10-19` |

## Compilation Instructions

### For C programs:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <filename>.c -o <output>
