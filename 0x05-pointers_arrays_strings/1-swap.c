/**
*swap_int - swaps values
*@a: argument 1 to be tested
*@b: argument 2 to be tested
*Description: swaps the values of two integers
*Return: void
*/

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
