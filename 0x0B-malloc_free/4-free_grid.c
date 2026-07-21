#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: grid to free
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    for (i = 0; i < height; i++)
        free(grid[i]);

    free(grid);
}
