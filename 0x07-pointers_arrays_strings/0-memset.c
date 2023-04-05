/**
*_memset - a function that fills memory
*@s: pointer to store data
*@b: constant byte
*@n: number of bytes
*Description: a function that fills memory with a constant byte
*Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
