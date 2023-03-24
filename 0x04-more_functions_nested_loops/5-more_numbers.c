#include "main.h"
/**
*more_numbers - prints numbers
*Description: prints numbers 0 to 14 ten times
*Return: void
*/

void more_numbers(void)
{
	int a, b;

	char numbers[] = "1234567891011121314";

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 19; b++)
		{
			_putchar(numbers[b]);
		}

		_putchar('\n');
	}
}
