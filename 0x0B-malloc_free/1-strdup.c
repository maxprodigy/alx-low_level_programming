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
	unsigned int a, b;

	if (str == NULL)
	return (NULL);
	
	for (a = 0; str[a] != '\0'; a++)
		;

	loc = (char *)malloc(sizeof(char) * (a+1));

	if (loc == NULL)
	return (NULL);

	for (a = 0; a < 1; b++)
	loc[b] = str[b];
	
	return (loc);
}
