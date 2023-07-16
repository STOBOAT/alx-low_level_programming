#include "main.h"
/**
 * _strpbrk - Entry point
 *
 *@s: The string to be searched
 *
 *@accept: The set of bytes to search for
 *
 *Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
		int j;

		while (*s)
		{
			for (j = 0; accept[j]; j++)
			{
			if (*s == accept[j])
			return (s);
			}
		s++;
		}

	return ('\0');
}

