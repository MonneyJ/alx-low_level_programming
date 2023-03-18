#include <stdio.h>
/**
*main - prints hexadecimals
*Description: prints hexadecimals numbers 0 to f
*Return: Always 0
*/
int main(void)
{
	int a;

	char hexadecimals[] = "0123456789abcdef\n";

	for (a = 0; a <= 16; a++)
	{
		putchar(hexadecimals[a]);
	}
	return (0);
}
