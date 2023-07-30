#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - function that returns the length of a string.
* @s : s is a character
* Return: value is i
*/
int _strlen(const char *s)
{
   int i = 0;


   while (s[i] != '\0')
   {
       i++;
   }
   return (i);
}

/**
* add_node - adds a new node at the beginig of the list_t list
* @head: Pointer to a pointer to the head of the list
* @str: this is a duplicated string
*
* Return: the address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
