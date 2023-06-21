#include "main.h"
/**
  *_islower - shows 1 for lowercase characters
  *and 0 for others
  *
  *@c: function that checks for lowercase character
  *
  *Return: 1 for the lowercase character or 0 for anything else
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
