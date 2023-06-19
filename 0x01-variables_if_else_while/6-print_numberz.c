#include <stdio.h>
/**
*main - entry
*Description - Prints single digit base 10 numbers
*Return: 0 (succes)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
