#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte, to the
* buffer pointed to by dest.
* @dest: destination.
* @src: source.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (len >= 0)
	{
		*(dest + len) = *(src + len);
		if (*(src + len) == '\0')
			break;
		len++;
	}
	return (dest);
}
