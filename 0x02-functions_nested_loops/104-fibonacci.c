#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 *	Solution was copied from Nobert Patrick
 *	Wise, github handle: Trikcode
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int next;
	int count;

	printf("%u, %u", a, b);

	for (count = 2; count < 98; count++)
	{
		next = a + b;
		printf(", %u", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
