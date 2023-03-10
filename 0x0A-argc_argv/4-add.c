#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds arguments
 * @argc: size of argument
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	i = 1;

	if (argc - 1 == 0)
	{
		printf("%d\n", 0);
	}
	else if (argc - 1 > 0)
	{
		while(i < argc)
		{
			if (isdigit(argv[i]))
			{
			sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum); 
	}
	return (0);
}
