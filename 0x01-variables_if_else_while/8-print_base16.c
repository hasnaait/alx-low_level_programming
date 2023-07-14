#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	unsigned char n = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(n);
		n++;
	}
	n = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}

