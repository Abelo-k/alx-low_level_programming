#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if a letter is lower
 * @c : the number to be checked
 *
 * Return: 1(success)
 */
int _islower(int c)
{
	if (c == islower(c))
		_putchar(1 + '0');
	else
		_putchar(0 + '0');
}
