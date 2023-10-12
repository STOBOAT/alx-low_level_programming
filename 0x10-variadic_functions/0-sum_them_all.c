#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: The number of arguments.
 *
 * Return: The sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list total;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(total, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(total, int);
	}

	va_end(total);

	return (sum);
}
