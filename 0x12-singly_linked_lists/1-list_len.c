#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 *@h: pointer to the list
 *
 *Return: number of elements
*/

size_t list_len(const list_t *h)
	{
		size_t concepts = 0;

		while (h)
		{
			concepts++;
			h = h->next;
		}

		return (concepts);
	}
