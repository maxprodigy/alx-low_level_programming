#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints string in even intervals
 * @s: the string to print
 *
 * Return: void
 */

void puts2(char *s)
{
	int i = 0;

	while (s[i])
	{
	if (i % 2 == 0)
	putchar(s[i]);
	i++;
	}
	putchar('\n');
}
