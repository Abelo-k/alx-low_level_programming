#include "main.h"
/**
 * print_to_98 - prints up to 98
 * @n: value
 *
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
			if (i == 98)
				printf("%d\n", i);
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d, ", j);
			if (j == 98)
				printf("%d\n", j);
		}
	}
}

