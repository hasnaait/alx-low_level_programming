#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long long f1 = 1, f2 = 2, sum;

	printf("%llu, %llu", f1, f2);

	for (count = 3; count <= 98; ++count)
	{
		sum = f1 + f2;
		printf(", %llu", sum);

		f1 = f2;
		f2 = sum;
	}

	printf("\n");

	return 0;
}
