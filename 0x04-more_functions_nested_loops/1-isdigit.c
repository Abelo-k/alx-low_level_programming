#include "main.h"
/**
 * _isdigit - checks if a variable is a number
 * @c: the variable to be checked
 *
 * Return: 1(digit) else 0
 */
int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (0);
	}
}
