#include "main.h"

/**
 * print_number - prints an integer
 * @n - input to integer to be printed
 * return - void
 **/

void print_number(int n)
{
	unsigned int x = n, m, y;

	if(n < 0)
	{
		_putchar(45);
	}
	if(x < 10)
		_putchar(x % 10);
	m = 1;
	while (x >= 10)
	{
		x = x / 10;
		m *= 10;
	}
	y = n;
	while (m >= 1)
	{
		_putchar(((y / m) % 10) + 48);
		m /= 10;
	}
}
