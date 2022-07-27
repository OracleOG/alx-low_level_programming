#include <stdio.h>

/**
 * main - prints number of arguments passed on CLI
 * @argc: argument count
 * @argv: argument vector
 * Return: always zero.
 **/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}
