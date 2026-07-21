#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = _strdup("WinMingle SE");
    if (!s) { printf("alloc failed\n"); return 1; }
    printf("%s\n", s);
    free(s);
    return 0;
}
