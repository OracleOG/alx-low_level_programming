#include "main.h"

/**
 * _strchr - searches for a character in a string
 * @s - input string
 * @C - character to be located
 *
 * return - pointer to the first occurrence of c if true
 * if false returns NULL
 **/

char *_strchr(char *s, char c)
{
	int count, x = 0;

	for(count = 0; s[count] != '\0'; count++)
	{
		if(s[count] == c)
		{
			x = count;
			break;
		}
	}
	if(x > 0)
		return (*(s + x));
	else
		return ('NULL');
}
