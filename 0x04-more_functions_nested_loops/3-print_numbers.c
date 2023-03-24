#include "main.h"
/**
*print_numbers - prints numbers
*Description: prints numbers 0 to 9
*Return: void
*/

void print_numbers(void)
{
	int a;

	char numbers[] = "0123456789";

	for (a = 0; a < 10; a++)
	{
		_putchar(numbers[a]);
	}
	_putchar('\n');
}
