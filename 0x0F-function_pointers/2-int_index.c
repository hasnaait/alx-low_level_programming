#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer
  *
  * @array: array where to search
  * @size: size of the arrary
  * @cmp: pointer to comparaison function
  *
  * Return: index of the int
  *		-1 if no match or size <=0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
