#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer
 * Return: returns factorial of n
 **/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
