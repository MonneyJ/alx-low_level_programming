#include <stdio.h>
/**
*main - prints alphabets
*Description: prints upper and lowercase alphabets
*Return: Always 0
*/
int main(void)
{
	int a;

	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	for (a = 0; a < 53; a++)
	{
		putchar(alphabets[a]);
	}
	return (0);
}
