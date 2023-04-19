#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function to be used
 * to compare values.
 *
 * Return: index of the first eement for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array && cmp)
	{
		for (p = 0; p < size; p++)
		{
			if (cmp(array[p]) != 0)
			return (p);
		}
	}
	return (-1);
}
