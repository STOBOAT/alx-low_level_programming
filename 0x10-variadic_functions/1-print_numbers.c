#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int count;

	va_start(numb, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(numb, int));

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numb);
}
