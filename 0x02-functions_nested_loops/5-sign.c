#include "main.h"
/**
 * print_sign - check a number if it is positive or negative or zero
 * @n: the number that is going to be checked
 *
 * Return: 1(positive) or 0(zero) or -1(megative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
