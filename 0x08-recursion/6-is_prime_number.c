#include "main.h"
/**
 * prime_check - checks to see if number is prime
 * @i:  int
 * @n: integer to test
 * Return: value
 */
int prime_check(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (prime_check(i + 1, n));
	return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (prime_check(i, n));
}
