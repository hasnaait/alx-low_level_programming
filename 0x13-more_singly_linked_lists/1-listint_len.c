#include "lists.h"

/**
 * listint_len - the number of elements in a list.
 *
 * @h: head of listte
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h != NULL)
	{
	h = h->next;
		nbr++;
	}
	return (nbr);
}
