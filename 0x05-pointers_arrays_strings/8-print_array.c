#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an  array of integers using printf
 * @a: pointer of array
 * @n: how many times to prints
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
