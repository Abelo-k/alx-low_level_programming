#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: size of argument
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, prod, count;

	for (i = 0; i < argc; i++)
		count++;
	if (argc - 1 >= 2)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
