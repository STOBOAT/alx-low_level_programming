82% of storage used … If you run out, you won't have enough storage to create, edit and upload files. Get 100 GB of storage for GH₵9.00 GH₵2.25/month for 3 months.
4-free_listint.c
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
