#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates a 2D grid of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to 2D array, NULL on failure or invalid dimensions
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate array of pointers (rows) */
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    /* Allocate each row */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            /* Free previously allocated rows on failure */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }
    }

    /* Initialize all to 0 */
    for (i = 0; i < height; i++)
        for (j = 0; j < width; j++)
            grid[i][j] = 0;

    return (grid);
}
