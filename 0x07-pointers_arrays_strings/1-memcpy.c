#include "main.h"
/**
*_memcpy - a function that copies memory area
*
*@dest: memory stored
*
*@src: memory copied
*
*@n: number of bytes used
*
*Return: copied memory with n bytes changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
