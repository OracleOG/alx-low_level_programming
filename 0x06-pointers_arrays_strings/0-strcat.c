#include "main.h"
/**
 * _strcat - concatenates two strings
 * overwriting the terminating null byte
 * @dest: destination.
 * @src: source.
 * Return: pointer to dest.
 **/

char *_strcat(char *dest, char *src)
{
	int x, count = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	for (x = 0; x >= 0; x++)
	{
		*(dest + count) = *(src + x);
		count++;
		if (*(src + x) == '\0')
			break;
	}

	return (dest);
}
