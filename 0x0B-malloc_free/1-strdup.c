#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *new_str;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0')
	{
		len++;
	}

	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}

