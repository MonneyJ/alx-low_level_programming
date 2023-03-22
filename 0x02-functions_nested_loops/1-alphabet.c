#include "main.h"
/**
*print_alphabet - prints alphabets
*Description: a function that prints the alphabets
*Return: void
*/

void print_alphabet(void)
{
	int a;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (a = 0; a < 27; a++)
	{
		_putchar(alphabets[a]);
	}
}
