#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - Entry
*description - Prints "Last digits of a random number"
*Return: 0 Always(success)
*/
int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;
	if (lastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastD);
	}
	else if (lastD == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastD);

	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastD);
	}
	return (0);
}
