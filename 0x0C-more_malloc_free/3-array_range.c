#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum value
* @max: lagrest value
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *loc;
	int p;

	if (min > max)
		return (NULL);

	loc = malloc(sizeof(*loc) * ((max - min) + 1));

	if (loc == NULL)
		return (NULL);

	for (p = 0; min <= max; p++, min++)
		loc[p] = min;

	return (loc);
}
