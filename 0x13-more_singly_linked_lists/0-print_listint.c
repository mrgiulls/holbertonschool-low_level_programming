#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements in linked list
 * @h: head of listint_t type
 *
 * Return: size_t, number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
