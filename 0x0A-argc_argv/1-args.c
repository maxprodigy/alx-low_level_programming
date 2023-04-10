#include <stdio.h>
#include "main.h"

/**
 * main: Prints number of arguments passed to the program
 * @argc: argument counts
 * @argv: argument vectors
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc -1);
	return (0);
}	
