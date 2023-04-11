#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup: returns pointer to a new space
 * @str: String used
 * Return: NULL in case of an error or zero
 */

char *_strdup(char *str)
{
	char *loc;
	int a, b;

	if (str == NULL)
	return (NULL);

	for (a = 0; str[a]; a++)
		b++;
	loc = malloc(sizeof(char) * (b + 1));

	if (loc == NULL)
	return (NULL);

	for (a = 0; str[a]; a++)
	{
	loc[a] = str[a];
	}

	loc[b] = '\0';

	return (loc);
}
