#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string to the standard output
 * @str: The string to be printed
 *
 * Description: This function prints the given string to the standard output.
 */
void _puts(char *str)
{
	puts(str);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle\"");
	return (0);
}
