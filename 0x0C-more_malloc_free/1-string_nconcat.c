#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from s2 to use
 *
 * Return: pointer to a newly allocated string containing s1 + first n bytes of s2,
 *         or NULL if allocation fails.
 *         NULL is treated as empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Use entire s2 if n is larger */
	if (n >= len2)
		n = len2;

	/* Allocate memory for s1 + n bytes from s2 + null terminator */
	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);

	/* Copy s1 */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy first n bytes of s2 */
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	/* Null terminate */
	result[i + j] = '\0';

	return (result);
}
