#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of the  list.
  *
  * @head: head 
  * @n: int add the list
  *
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lst;

	if (head == NULL)
		return (NULL);
	lst  = malloc(sizeof(listint_t));
	if (lst == NULL)
		return (NULL);
	lst->n = n;
	lst->next = *head;
	*head = lst;
	return (lst);
}
