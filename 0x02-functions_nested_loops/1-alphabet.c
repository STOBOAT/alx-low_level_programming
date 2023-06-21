#include "main.h"

/**
*main - Entry point
*
*Description: Prints out the alphabet, in lowercase
*Return: void
*/

void print_alphabet(void)
{
	int (l);
	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
