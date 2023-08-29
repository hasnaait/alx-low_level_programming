#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the  list.
 *
 * @h: head of list
 *
 * Return: the count of  nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr  = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr++;
	}
	return (nbr);
}
