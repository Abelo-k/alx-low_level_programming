#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints minimum amount of cents for an amount of money
 * @argc: size of argument
 * @argv: argument
 *
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int cent[] = {1, 2, 5, 10, 25};

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("%d\n", 0);
		}
		else if (atoi(argv[1]) >= 0 && atoi(argv[1]) <= 10)
		{
			printf("%d\n", cent[0]);
		}
		else if (atoi(argv[1]) > 10 && atoi(argv[1]) <= 50)
		{
			printf("%d\n", cent[1]);
		}
		else if (atoi(argv[1]) > 50 && atoi(argv[1]) <= 100)
		{
			printf("%d\n", cent[2]);
		}
		else if (atoi(argv[1]) > 100 && atoi(argv[1]) <= 150)
		{
			printf("%d\n", cent[3]);
		}
		else
		{
			printf("%d\n", cent[4]);
		}
	}
	return (0);
}

