#include "main.h"
/**
 * print_line - prints n times of _
 * @n: the amount to print _
 */
void print_line(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n ; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (b == a)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');
		}
		_putchar('\n');
	}
}
}

