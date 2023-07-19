#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int last_Digit;

	if (n < 0)
		last_Digit = -1 * (n % 10);
	else
		last_Digit = n % 10;

	_putchar(last_Digit + '0');
	return (last_Digit);
}
