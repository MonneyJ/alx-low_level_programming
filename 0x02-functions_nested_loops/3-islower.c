#include <ctype.h>
#include "main.h"
/**
*_islower - tests a condition
*@c: variable argument
*Description: a function that checks for lowercase character
*Return: 1 if c is lowercase otherwise 0
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
