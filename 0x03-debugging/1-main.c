#include <stdio.h>
/**
* main - This causes an infinite loop
*
* Return: 0
*/
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
	/*while (i < 10) this statement is always true */
	/*{*/
	/*putchar(i);this character is printed indefinitely*/
	/*}*/
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
