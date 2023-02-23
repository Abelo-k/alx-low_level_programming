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
	char c;

	if (c == toupper(c))
		return(1);
	else
		return(0);
}
