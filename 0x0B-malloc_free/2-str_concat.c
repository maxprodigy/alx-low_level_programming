#include "main.h"
#include <stdlib.h>

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure else return pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *loc;
	unsigned int a, b, c, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	loc = malloc(sizeof(char) * (a + b + 1));

	if (loc == NULL)
	{
	free(loc);
	return (NULL);
	}

	for (c = 0; c < a; c++)
	loc[c] = s1[c];

	limit = b;
	for (b = 0; b <= limit; c++, b++)
	loc[c] = s2[b];

	return (loc);
}
