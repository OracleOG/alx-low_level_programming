#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of char
 * @size: size of array.
 * @c: charater to initialize array.
 * Return: pointer to the array.
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}

	return (s);
}
