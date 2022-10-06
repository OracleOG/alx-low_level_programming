#include "main.h"
/**
 * _puts - prints a string and a newline to stdout
 * @str - pointer to the string to be printed
 * return - always zero
 **/
void _puts(char *str)
{
	int x;
	char *n;
	n = str;
	x = 0;

	while (*(n + x) != '\0')
	{
	        _putchar(*(n + x));
		x++;
	}
	_putchar('\n');
}
