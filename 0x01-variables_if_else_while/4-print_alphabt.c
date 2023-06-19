#include <stdio.h>
/**
*main - entry
*Description - Prints alphabets with some exceptions
*Return: 0 (succes)
*/
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 101 || a == 113)
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
