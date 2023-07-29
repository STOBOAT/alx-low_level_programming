#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* list_len -defines a function that takes a pointer to a list_t structure
* @h: name of the list
* Return: the number of nodes (elements)
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
