#include "main.h"
#include <stdlib.h>

/**
 * create_array: creates an array of chars
 * @size: array size
 * @c: character stored
 * Return: NULL if it fails or if size is zero
 */

char *create_array(unsigned int size, char c)
{
	char *loc;
	unsigned int i;

	if (size == 0)
	return (NULL);
	loc = malloc(sizeof(char) * size);

	if (loc == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	loc[i] = c;

	return (loc);
}
