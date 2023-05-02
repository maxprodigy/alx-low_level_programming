#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of list.
 *
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t heads = 0;

	while (h)
	{
	h = h->next;
	heads++;
	}
	return (heads);
}
