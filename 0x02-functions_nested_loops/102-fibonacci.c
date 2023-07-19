#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c;
	long fib1 = 0, fib2 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = fib1 + fib2;
		printf("%ld", sum);

		fib1 = fib2;
		fib2 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
