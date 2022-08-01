#include "main.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * *_strdup - duplicate a string
 * @str: string to be duplicated.
 * Return: pointer to string duplicate
 **/

char *_strdup(char *str)
{
	char *s;
	int x, y;

	x = _strlen(str);


	if (str == NULL)
		return (NULL);
	s = malloc(x * sizeof(char));
		if (s == NULL)
			return (NULL);
	for (y = 0; y < x; y++)
		s[x] = str[x];
	return (s);
}


/**
* _strlen - returns the length of a string.
* @s: input string.
* Return: length of a string.
*/
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count++;
return (count);
}
