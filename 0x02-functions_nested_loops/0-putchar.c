#include "main.h"
/**
*main - prints a word
*Description: a program that prints _putchar, followed by a new line.
*Return: Always 0
*/
int main(void)
{
	int a;
	char word[] = "_putchar\n";

	for (a = 0; a < 9; a++)
	{
		_putchar(word[a]);
	}

	return (0);
}
