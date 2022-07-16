#include "main.h"

/**
 * leet - encodes a string into 0,1,3,4,7.
 * @s: input for string
 *
 * Return: the encoded string
 **/

char *leet(char *s)
{
	int count = 0, x;
	char cod[] = {52, 51, 48, 55, 49};
	char up[] = {'A', 'E', 'O', 'T', 'L'};
	char low[] = {'a', 'e', 'o', 't', 'l'};

	while (s[count] != '\0')
	{
		for (x = 0; x < 5; x++)
		{
			if (s[count] == up[x] || s[count] == low[x])
			{
				s[count] = cod[x];
				break;
			}
		}
			count++;
	}
	return (s);
}
