#include <stdio.h>
/**
*main - prints alphabets
*Description: prints all alphabets in reverse order
*Return: Always 0
*/
int main(void)
{
	int a;

	char alphabets[] = "\nabcdefghijklmnopqrstuvwxyz";

	for (a = 26; a >= 0; a--)
	{
		putchar(alphabets[a]);
	}
	return (0);
}
