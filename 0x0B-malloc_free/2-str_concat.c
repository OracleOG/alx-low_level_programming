#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);

/**
* *str_concat - concatenates two strings.
* @s1: first string
* @s2: second string.
* Return: a pointer to the concatenated string.
 **/

char *str_concat(char *s1, char *s2)
{
	int a, b, x, y;
	char *str;

	a = _strlen(s1);
	b = _strlen(s2);
	b = b + a;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc(b * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (y = 0; s1[y] != '\0'; y++)
	{
		str[y] = s1[y];
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		str[y] = s2[x];
		y++;
	}
	str[y] = '\0';

	return (str);
}

/**
 * _strlen - returns the lenght of a string
 * @s: pointer to the string to be checked
 * Return: lenght of string
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
