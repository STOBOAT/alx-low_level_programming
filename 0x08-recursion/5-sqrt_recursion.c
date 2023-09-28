#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0); // Square root of 0 is 0
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - helper function to find the square root recursively
 *
 * @n: the number for which to find the square root
 * @i: the iterator
 *
 * Return: the resulting square root, or -1 if not found
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
