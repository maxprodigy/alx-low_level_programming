#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{

	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
