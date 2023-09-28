#include "main.h"


/**
 * _strlen_recursion - gives the length of string using resurec
 * @s:string to mesur lenth
 * Return:int
 */

int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s)
	{
		ln++;
		ln += _strlen_recursion(s + 1);

	}
	return (ln);
}
