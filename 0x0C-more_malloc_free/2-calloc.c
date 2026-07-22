#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory (zero-initialized),
 *         NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total;
	unsigned char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	/* Zero out the memory */
	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < total; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
