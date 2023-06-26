#include "main.h"

/**
* _strlen - Finds and retuns the length of a string.
*
*@s:String pointer to the string whose length is to be found.
*
* Return: returns length of string.
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
