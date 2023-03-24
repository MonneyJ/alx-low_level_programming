#include <ctype.h>
/**
*_isdigit - test a condition
*@c: argument to be tested
*Description: a condition on whether argument is a digit or not
*Return: Returns 1 if c is a digit otherwise 0
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
