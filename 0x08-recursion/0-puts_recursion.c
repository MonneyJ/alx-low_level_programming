#include "main.h"
/**
*_puts_recursion - prints a string
*@s: argument pointer to strore string
*Description: a function that prints a string
*Return: void
*/

void _puts_recursion(char *s)
{
	int x = 0;

	while (x < 19)
	{
		_putchar(s[x]);
		x++;
	}

	_putchar('\n');
}
