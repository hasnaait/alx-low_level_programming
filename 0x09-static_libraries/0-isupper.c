#include"main.h"

/**
 * _isupper - function to check if
 *           character is upercase
 * @c:  input of function int
 * Return: returns 1 if `c` is uppercase
 *         otherwise always 0 (Success)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
