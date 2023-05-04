#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int sum;

	sum = 0;
	if (!b)
	return (0);

	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] != '0' && b[p] != '1')
		return (0);
	}
	for (p = 0; b[p] != '\0'; p++)
	{
		sum <<= 1;
		if (b[p] == '1')
		sum += 1;
	}
	return (sum);
}
