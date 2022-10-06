#include "main.h"
/**
 * _strlen -returns the lenght of a string
 * @s - pointer to the string to be checked
 * return - lenght of string
 **/
int _strlen(char *s)
{
	int count, x;
	char *n;
	count = 0;
	n = s;
	x = 0;

	while (*(n + x) != '\0')
	{
		count++;
		x++;
	}
	return (count);
}
