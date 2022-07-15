#include "main.h"

/**
 * string_toupper - convert a lower case string to uppercase.
 * @str - lower case string.
 *
 *return - uppercase string.
 **/

char *string_toupper(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if(str[count] >= 97 && str[count] <= 122)
			str[count] = ((str[count] - 97) + 65);
	}

	return (str);
}
