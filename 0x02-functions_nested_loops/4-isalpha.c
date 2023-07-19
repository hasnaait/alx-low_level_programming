#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *          lowercase or uppercase
 *
 * @c: input function character casted to int.
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
