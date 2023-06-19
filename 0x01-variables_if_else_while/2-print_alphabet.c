#include <stdio.h>
/**
*main - entry
*Description - Prints the alphabet in lowercase, followed by a new line
*Return: 0 Always(succes)
*/
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
