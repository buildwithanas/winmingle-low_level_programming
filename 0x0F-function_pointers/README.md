# 0x0F. C - Function pointers

## Tasks

### 0. What's my name
Write a function that prints a name.

- Prototype: `void print_name(char *name, void (*f)(char *));`

**File:** `0-print_name.c`

### 1. Where is the money
Execute a function on each element of an array.

- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`

**File:** `1-array_iterator.c`

### 2. Where is the money (part 2)
Searches for an integer; returns the index of the first element for which cmp function does not return 0. If no element matches or size <= 0, return -1.

- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`

**File:** `2-int_index.c`

### 3. Simple calculator using function pointers
Write a simple calculator program.

**Files:** `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`, `3-calc.h`

### 4. Print opcodes of main function
Print the opcodes of your own main function.

**File:** `100-main_opcodes.c`
