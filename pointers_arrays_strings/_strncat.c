char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0') /* Copier src dans dest */
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0'; /* Ajouter le caractère de fin*/

	return dest;
}
