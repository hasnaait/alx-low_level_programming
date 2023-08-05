#include "main.h"
/**
 * _memset -  fill the first @n bytes of the memory area pointed
 *		 with the constant byte @b
 *
 * @n: bytes of the memory to fill
 *
 * @s: with the constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
