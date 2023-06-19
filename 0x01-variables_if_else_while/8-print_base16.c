#include <stdio.h>
/**
*main - entry
*Description - Prints base 16 numbers in lowercase
*Return: 0 (succes)
*/
int main(void)
{
	int d;
	int a;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
