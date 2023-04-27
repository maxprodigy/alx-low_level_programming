#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *
 * Return: No return
 */

void free_list(list_t *head)
{
	list_t *max;

	while (head)
	{
		max = head->next;
		free(head->str);
		free(head);
		head = max;
	}
}
