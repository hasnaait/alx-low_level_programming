#include "main.h"

/**
 * print_square - print a square using hashtag  #
 *
 * @sz: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int sz)
{
	if (sz <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < sz; i++)
		{
			for (j = 0; j < sz; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
