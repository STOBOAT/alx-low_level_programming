#include "main.h"

/**
  *main - Entry
  *
  *Description: print_alphabet_x10 - prints the alphabets ten times.
  *
  *Return: Always 0
  */
void print_alphabet_x10(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
