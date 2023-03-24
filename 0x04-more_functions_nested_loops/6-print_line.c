#include "main.h"
/**
*print_line - prints underscore
*@n: argument to be tested
*Description: prints n times of underscores
*Return: void
*/

void print_line(int n)
{
	int a;
	char underscore[] = "_";

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(underscore[0]);
		}

		_putchar('\n');
	}
}
