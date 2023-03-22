#include "main.h"
/**
*print_alphabet_x10 - prints alphabets
*Description: a function that prints 10 times the alphabet
*Return: void
*/

void print_alphabet_x10(void)
{
	int a, b;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 27; b++)
		{
			_putchar(alphabet[b]);
		}
	}
}
