/**
*_strncat - concatenates a string
*@dest: destination string
*@src: source string
*@n: number of strings
*Description: concatenates a string by the number of source string
*Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
