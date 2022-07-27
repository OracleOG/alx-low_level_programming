#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two arguments
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 1 if argc is > 2
 * else returns zero.
 **/

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);

		return (0);
	}
}
