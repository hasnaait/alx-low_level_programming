#include "main.h"
/**
 * infinite_add - adds two numbers in a buffer
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	int carry = 0;
	int i = len1 - 1, j = len2 - 1, k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;
		r[k] = sum % 10 + '0';
		i--;
		j--;
		k++;
	}

	r[k] = '\0';

	int l = 0, m = k - 1;

	while (l < m)
	{
		char temp = r[l];

		r[l] = r[m];
		r[m] = temp;
		l++;
		m--;
	}

	return (r);
}
