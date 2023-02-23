#include "main.h"
/**
 * _isdigit - checks if a variable is a number
 * @c: the variable to be checked
 *
 * Return: 1(digit) else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
