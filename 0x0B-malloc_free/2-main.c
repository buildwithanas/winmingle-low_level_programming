#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = str_concat("Win", "Mingle");
    if (!s) { printf("failed\n"); return 1; }
    printf("%s\n", s);
    free(s);
    return 0;
}
