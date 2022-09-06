#include "lists.h"

/**
 * list_len - return the length of elements in a list
 * @h: list to to checked
 * Return: length of h
 **/

size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
