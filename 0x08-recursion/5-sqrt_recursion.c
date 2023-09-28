#include "main.h"

/**
 * _sqrt__recursive -  square root of a number
 * @n: Number raw.
 * @r: Result.
 * Return: Result.
 */

int _sqrt__recursive(int n, int m)
{
	if (n == 0)
		return (0);

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	if (m > n / 2)
		return (-1);

	if (n != m * m)
		return (_sqrt_nat(n, m + 1));

	if (n == m * m)
		return (m);

	return (-1);
}

/**
 * _sqrt_recursion - Calculate the natural square root using recursi
 * @n: Number.
 * Return: Result.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt__recursive(n, 0));
}
