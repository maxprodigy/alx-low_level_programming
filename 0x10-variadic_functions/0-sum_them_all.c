#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of everything.
 * @n: The number of paramters passed to the function.
 * @...: Infinite number of paramters.
 *
 * Return: If n == 0 - 0.
 *         else - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int index, sum = 0;

	va_start(ad, n);

	for (index = 0; index < n; index++)
	sum += va_arg(ad, int);

	va_end(ad);

	return (sum);
}
