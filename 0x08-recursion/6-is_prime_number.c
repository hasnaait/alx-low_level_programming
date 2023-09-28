#include "main.h"

/**
 * is_prime_recursive - checks to see if number is prime
 * @n:int
 * @div:int
 * Return:int
 */

int is_prime_recursive(int n, int div)
{
	if (n < 2)
		return (0);
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_recursive(n, div - 1));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n / 2));
}
