#include <stdio.h>
/**
*main - entry
*Description - Prints single digits comninations
*Return: 0 (succes)
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
