#include <ctype.h>
/**
*_isalpha - tests a condition
*@c: variable argument
*Description:  a function that checks for alphabetic character
*Return: 1 if c is a letter, lowercase or uppercase otherwise 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
