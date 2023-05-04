#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int o;
	char *p;

	o = 1;
	p = (char *)&o;

	return ((*p);
}
