#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals in a square matrix
 *
 * @a: 1D array
 *
 * @size: Size of the square matrix
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int y;
	int sum1 = 0;
	int sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

