#include <stdio.h>
/**
*main - entry
*Description - Prints the alphabet in lowercase and uppercas
*Return: 0 Always(succes)
*/
int main(void)
{
	int a = 97;
	int A = 65;

	while (a <= 122)
	{
		putchar(a);
		a = a + 1;
	}
	while (A <= 90)
	{
		putchar(A);
		A = A + 1;
	}
	putchar('\n');
	return (0);
}
