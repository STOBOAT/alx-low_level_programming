#include <stdio.h>
#include <stdlib.h>
/**
*main - entry
*description - Prints "the sizes of various funtions"
*Return: 0 Always(succes)
*/
int main(void)
{
		printf("size of a char: %lu byte(s)\n", sizeof(char));
		printf("size of a int: %lu byte(s)\n", sizeof(int));
		printf("size of a long int: %lu byte(s)\n", sizeof(long int));
		printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
		printf("size of a float: %lu byte(s)\n", sizeof(float));
		return (0);
}
