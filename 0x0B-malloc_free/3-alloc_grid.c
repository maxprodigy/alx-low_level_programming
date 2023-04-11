#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **bipoint;
	int i = 0, j;

	if (width == 0 || height == 0)
	return (NULL);
	bipoint = (int **) malloc(sizeof(int *) * height);
	if (bipoint != NULL)
	{
	for (; i < height; i++)
	{
	bipoint[i] = (int *) malloc(sizeof(int) * width);
	if (bipoint[i] != NULL)
	{
	for (j = 0; j < width; j++)
	bipoint[i][j] = 0;
	}
	else
	{
	while (i >= 0)
	{
	free(bipoint[i]);
	i--;
	}
	free(bipoint);
	return (NULL);
	}
	}
	return (bipoint);
	}
	else
	{
	return (NULL);
	}
}
