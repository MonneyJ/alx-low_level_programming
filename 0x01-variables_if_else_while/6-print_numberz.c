#include <stdio.h>
/**
*main - prints numbers
*Description: prints numbers 0 to 9
*Return: Always 0
*/
int main(void)
{
	int a;

	char numbers[] = "0123456789\n";

	for (a = 0; a <= 10; a++)
	{
		putchar(numbers[a]);
	}
	return (0);
}
