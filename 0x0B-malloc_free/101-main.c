#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_words(char **words)
{
    int i;
    for (i = 0; words[i]; ++i)
        printf("%s\n", words[i]);
}

int main(void)
{
    char **w = strtow("   WinMingle   community   #learn  ");
    if (!w) { printf("Failed\n"); return 1; }
    print_words(w);
    /* free words... (implement free in student code) */
    return 0;
}

