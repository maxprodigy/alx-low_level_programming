#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *text;

	if (head != NULL)
	{
	text = *head;
	while ((temp = text) != NULL)
	{
	text = text->next;
	free(temp);
	}
	*head = NULL;
	}
}
