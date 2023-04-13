#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: allocated memory.
 *
 * Return: pointer to the address of the memory block.
 */

void *malloc_checked(unsigned int b)
{
	void *log;

	log = malloc(b);
	if (log == NULL)
		exit(98);
	return (log);
}
