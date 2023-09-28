#include "main.h"
/**
 * factorial - factorial of int using recursion
 * @n:int to calc fact
 * Return:int
 */
int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (-1);
	}
	else
	{
		f = n * factorial(n - 1);
	}
	return (f);

}
