#include "main.h"

/**
 * _memcpy - copies memory area 
 * @dest - destination string
 * @src - source string
 * @n - size of src to be copied
 *
 * return - dest string
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for(count = 0; count < n; count++)
	{
		*(dest + count) = *(src + count);
	}

	return (dest);
}
