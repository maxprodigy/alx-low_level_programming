#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 *
 * Return: no return
 */

void print_dog(struct dog *d)

{
	if (d)
	
	{
	if (!(d->name))
	printf("Name: (nil)\n");
	else
	printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!(d->owner))
	printf("Owner: (nil)\n");
	else
	printf("Owner: %s\n", d->owner);
	}

	if (d == NULL)
	return;
}
