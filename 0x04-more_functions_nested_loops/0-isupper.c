#include <ctype.h>
/**
*_isupper - tests a condition_
*@c: variable to be tested
*Description: a condition whether argument is uppercase or not
*Return: Returns 1 if c is uppercase otherwise 0
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
