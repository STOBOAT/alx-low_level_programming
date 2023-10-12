#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print anything based on the format string.
 * @format: A format string specifying the types of arguments.
 */

void print_all(const char * const format, ...)
{
	va_list printable;
	unsigned int i = 0;
	char *str;
	int num;
	float fnum;

	va_start(printable, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			num = va_arg(printable, int);
			printf("%c", num);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(printable, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			fnum = va_arg(printable, double);
			printf("%f", fnum);
		}
		else if (format[i] == 's')
		{
			str = va_arg(printable, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}
	printf("\n");
	va_end(printable);
}

