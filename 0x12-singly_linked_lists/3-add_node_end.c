#include "lists.h"

/**
* add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	size_t nchar;
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	newnode->len = nchar;
	newnode->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = newnode;
	else
	{
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	}

	return (*head);
	}
