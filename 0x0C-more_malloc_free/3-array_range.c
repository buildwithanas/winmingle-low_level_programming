#include <stdlib.h>

/**
 * array_range - creates an array of integers containing all values from min to max
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the newly created array,
 *         NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
