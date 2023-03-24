#include "main.h"
/**
*print_most_numbers - prints numbers
*Description: prints numbers 0 to 9 and omits 2 and 4
*Return: void
*/

void print_most_numbers(void)
{
	int a;
	char two = '2', four = '4';

	char numbers[] = "0123456789";

	for (a = 0; a < 10; a++)
	{
		if (numbers[a] == two || numbers[a] == four)
		{
			continue;
		}
		else
		{
			_putchar(numbers[a]);
		}
	}

	_putchar('\n');
}
