#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints last  half of string
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;
	int odd = 0;

	if (_strlen(str) % 2 != 0)
	{
		odd += 1;
	}
	for (i = (_strlen(str) + odd) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
