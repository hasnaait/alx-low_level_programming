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
	int a = 1;
	int b = 2;
	int next;
	int count;

	printf("%u, %u", a, b);

	for (count = 2; count < 98; count++)
	{
		next = a + b;
		printf(", %i", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
