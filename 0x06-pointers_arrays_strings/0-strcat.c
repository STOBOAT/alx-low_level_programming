#include "main.h"

/**
*_strcat - concatenates two strings
*
* @dest: input value
*
* @src: input value
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	for (dest_len = 0; dest[dest_len] != '0'; dest_len++)
	for (i = 0; src[i] != '0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len] = '0';
	return (dest);
}
