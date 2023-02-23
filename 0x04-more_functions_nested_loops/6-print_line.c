#include "main.h"
/**
 * print_line - prints n times of _
 * @n: the amount to print _
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n ; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
