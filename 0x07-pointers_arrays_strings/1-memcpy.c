#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area @src
 * 		to memory area @dest
 *
 * @n: numbers of bytes to  copy
 *
 * @src: source to copy from
 *
 * @dest: memory area to copy to
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
