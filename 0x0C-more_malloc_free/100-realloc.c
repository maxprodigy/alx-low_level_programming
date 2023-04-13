#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block.
* if malloc fails return NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *loc;
	unsigned int p;

	if (ptr == NULL)
	{
	loc = malloc(new_size);
	return (loc);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	else
	{
	loc = malloc(new_size);
	if (loc != NULL)
	{
	for (p = 0; p < old_size && p < new_size; p++)
	*((char *)loc + p) = *((char *) ptr + p);
	free(ptr);
	return (loc);
	}
	else
	return (NULL);
	}
}
