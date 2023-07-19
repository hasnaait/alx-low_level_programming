#include "main.h"
#include <stdio.h>

/**
 * main - Entry point|
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4M
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long fib1 = 0, fib2 = 1, fibn;
	float sum;

	while (1)
	{
		fibn = fib1 + fib2;

		if (fibn > 4000000)
			break;

		if ((fibn % 2) == 0)
			sum += fibn;

		fib1 = fib2;
		fib2 = fibn;
	}
	printf("%.0f\n", sum);

	return (0);
}
