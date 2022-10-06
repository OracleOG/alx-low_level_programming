#include "main.h"

/**
 * _strncpy - copies a string,
 * @src: source.
 * @dest: destination.
 * @n: number of bytes to be copied.
 * Return: the pointer to dest.
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && *(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	while (count < n)
	{
		*(dest + count) = '\0';
		count++;
	}

	return (dest);
}
