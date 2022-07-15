#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: number of bytes to be used.
 * Return: the pointer to dest.
 **/

char _strncat(char *dest, char *src, int n)
{
	int count = 0, x;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	for (x = 0; x <= n; x++)
	{
		*(dest + count) = *(src + x);
		count++;
		if (*(src + x) == '\0')
			break;
	}

	return (dest);
}
