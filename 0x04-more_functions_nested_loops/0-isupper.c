#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if it is Upper case
 * @c: variable to be checked
 *
 * Return: 1(upper) or (0)lower
 */
int _isupper(int c)
{
	char d;

	if (d >= 'A' && d <= 'Z')
		return (1);
	else
		return (0);
}
