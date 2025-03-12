#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings up to n characters of s2
* @s1: First string
* @s2: Second string
* @n: Number of characters to take from s2
*
* Return: Pointer to the newly allocated memory containing s1 + n chars of s2
*         NULL if memory allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
