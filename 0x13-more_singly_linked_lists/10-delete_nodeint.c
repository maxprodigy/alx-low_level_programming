#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *temp_addr;
unsigned int count;

temp = *head;
count = 0;
while (temp)
{

if (count == (index - 1))
{
temp_addr = (temp->next)->next;
free(temp->next);
temp->next = temp_addr;
return (1);
}

else if (index == 0)

{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
count++;
temp = temp->next;
}

return (-1);
}
