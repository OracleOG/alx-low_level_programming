#include "main.h"

/**
 * reverse_array - reverse integers in a array
 * @a - pointer to the array
 * @n - size of the array
 * Return - void
 **/

void reverse_array(int *a, int n)
{
	int x = 0;
	int *b = a;

	while (x < n)
	{
		*(b + x) = *(a + x);
		x++;
	}
	x = 0;
	while (n > 0)
	{
		*(a + (n - 1)) = *(b + x);
		n--;
		x++;
	}
}
