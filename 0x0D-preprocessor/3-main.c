#include <stdio.h>
#include "3-function_like_macro.h"

int main(void)
{
    int i = ABS(-98) * 10;
    int j = ABS(98) * 10;

    printf("%d, %d\n", i, j);
    return (0);
}

