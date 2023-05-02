#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint(listint_t *head)
{
listint_t *current, *meat;

current = head;
while (current)
{
	meat = current->next;
	free(current);
	current = meat;
}
}
