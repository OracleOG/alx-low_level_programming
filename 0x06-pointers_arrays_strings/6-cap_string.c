#include "main.h"

/**
 * cap_string - capitalizes each word in a string
 * @str: input string
 * Return: capitalized string.
 **/

char *cap_string(char *str)
{
	int count = 0, x;
	int spec[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (str[count] >= 97 && str[count] <= 122)
		str[count] = ((str[count]) - 32);
	count++;

	while (str[count] != '\0')
	{
		for (x = 0; x < 13; x++)
		{
			if (str[count] == spec[x])
			{
				if (str[count + 1] >= 97 && str[count + 1] <= 122)
				{
					str[count + 1] = ((str[count + 1]) - 32);
					break;

				}
			}
		}
	count++;
	}

	return (str);
}
