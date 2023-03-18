#include <stdio.h>
/**
*main - prints alphabets
*Description: prints all alphabets except letter 'e' and 'q'
*Return: Always 0
*/
int main(void)
{
	int a;

	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (a = 0; a < 27; a++)
	{
		if (a == 4 || a == 16)
		{
			continue;
		}
		else
		{
			putchar(alphabets[a]);
		}
	}
	return (0);
}
