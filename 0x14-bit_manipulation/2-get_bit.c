#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int sum;

	if (index > (sizeof(unsigned long int) * 8))
	return (-1);

	sum = (n >> index) & 1;
	return (sum);
}
