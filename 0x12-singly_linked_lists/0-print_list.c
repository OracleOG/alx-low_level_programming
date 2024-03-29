#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: first list to print.
 * Return: the number of nodes.
 **/

size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (x);
}
