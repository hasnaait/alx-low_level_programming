#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - delete  a list
 *
 * @head: A pointer to first node of the list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
