#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
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
