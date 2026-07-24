# 0x10. C - Variadic Functions

## Description
This project contains implementations of variadic functions in C. Variadic functions are functions that can accept a variable number of arguments. The implementations demonstrate how to use `stdarg.h` macros (`va_list`, `va_start`, `va_arg`, `va_end`) to handle variable arguments.

## Learning Objectives
- Understanding variadic functions and their usage
- Using `stdarg.h` macros effectively
- Handling different data types in variadic functions
- Implementing functions with variable number of parameters
- Understanding the `const` qualifier in function prototypes

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 20.04 LTS using `gcc` with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style
- No global variables
- No more than 5 functions per file
- Header file `variadic_functions.h` contains all function prototypes

## Files

| File | Description | Prototype |
|------|-------------|-----------|
| `0-sum_them_all.c` | Returns the sum of all its parameters | `int sum_them_all(const unsigned int n, ...);` |
| `1-print_numbers.c` | Prints numbers separated by a given separator | `void print_numbers(const char *separator, const unsigned int n, ...);` |
| `2-print_strings.c` | Prints strings separated by a given separator | `void print_strings(const char *separator, const unsigned int n, ...);` |
| `3-print_all.c` | Prints anything based on format specifiers | `void print_all(const char * const format, ...);` |
| `variadic_functions.h` | Header file with all function prototypes | - |


