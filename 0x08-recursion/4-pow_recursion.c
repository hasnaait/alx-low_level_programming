#include "main.h"

/**
 * _pow_recursion - x power y
 * @x:int the base
 * @y:int the exponant
 * Return:int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
