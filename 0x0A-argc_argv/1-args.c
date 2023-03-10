#include <stdio.h>

/**
 * main - counts number of arguments
 * @argc: size of argument
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
