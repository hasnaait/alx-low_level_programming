#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * len -  length of a string.
 * @s : the string
 * Return: value is i
 */
int len(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node  beginning of a listt
 *.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);

	n->len = len(str);
	n->next = *head;
	*head = n;

	return (n);
}
