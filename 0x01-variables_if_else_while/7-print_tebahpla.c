#include <stdio.h>
/**
  *main - entry
  *Description - Prints lowercase alphabets in reverse
  *Return: 0 (succes)
  */
int main(void)
{
	int z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
