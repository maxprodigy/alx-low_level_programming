#include "main.h"
#include <stdlib.h>

/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	char *moose;
	int k, a, b, ib;

	if (ac == 0)
		return (NULL);

	for (k = a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
		return (NULL);

		for (b = 0; av[a][b] != '\0'; b++)
		
		k++;
	}

	moose = malloc((k + 1) * sizeof(char));

	if (moose == NULL)
	{
		free(moose);
		return (NULL);
	}

	for (a = b = ib = 0; ib < k; b++, ib++)
	{
		if (av[a][b] == '\0')
		{
			moose[ib] = '\n';
			a++;
			ib++;
			b = 0;
		}
		if (ib < k - 1)
		moose[ib] = av[a][b];
	}
	moose[ib] = '\0';

	return (moose);
}
