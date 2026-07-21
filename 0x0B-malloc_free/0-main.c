#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_hex(char *buf, unsigned int sz)
{
    unsigned int i;
    for (i = 0; i < sz; ++i)
    {
        if (i && (i % 10) == 0) putchar('\n');
        printf("0x%02x ", (unsigned char)buf[i]);
    }
    putchar('\n');
}

int main(void)
{
    char *b = create_array(30, 'W');
    if (!b) { printf("alloc fail\n"); return 1; }
    print_hex(b, 30);
    free(b);
    return 0;
}
