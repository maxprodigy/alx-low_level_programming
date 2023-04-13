#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *loc;
	int i = 0, j = 0;

	
	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	loc = malloc(j);

	if (loc == NULL)
		return (NULL);

	while (i < j)
	{
		loc[i] = 0;
		i++;
	}

	return (loc);

}
