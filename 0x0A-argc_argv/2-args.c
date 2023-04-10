#include <stdio.h>

/**
 *main: prints the arg contents
 *@argc: argument census
 *@argv: argument vector
 *Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
