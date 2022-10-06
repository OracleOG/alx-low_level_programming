#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @b - constant byte
 * @n - amount of space of memory of string to be used
 * @s - string to be filled
 *
 * return - char s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*(s + count) = b;
	}
       	return (s);
}
