#include "main.h"
/**
*_puts - prints a string
*@str: argument to be used
*Description: prints a string, followed by a new line, to stdout
*Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);

	}

	_putchar('\n');
}
