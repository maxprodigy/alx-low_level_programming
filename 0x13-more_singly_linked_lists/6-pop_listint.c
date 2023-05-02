#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)

{
	int copy;
	listint_t *ment;

	if (*head == NULL)
	return (0);

	ment = *head;
	*head = (*head)->next;
	copy = ment->n;
	free(ment);

	return (copy);
}
