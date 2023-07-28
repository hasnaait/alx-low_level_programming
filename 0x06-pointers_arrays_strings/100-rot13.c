#include "main.h"
/**
 * rot13 - encrypts string using rot13
 *
 * @s: string to encrypt
 *
 * Return: char value
 */
char *rot13(char *s)
{
	char origin[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rotatt[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; origin[j] != '\0'; j++)
		{
			if (s[i] == origin[j])
			{
				s[i] = rotat[j];
				break;
			}
		}
	}
	return (s);
}
