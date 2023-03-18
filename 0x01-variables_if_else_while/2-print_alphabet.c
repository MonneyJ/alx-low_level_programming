#include <stdio.h>
/**
*main - prints alphabets
*Description: prints all alphabets in lowercase
*Return: Always 0
*/
int main(void)
{
	int a;

	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (a = 0; a < 27; a++)
	{
		putchar(alphabets[a]);
	}
	return (0);
}
