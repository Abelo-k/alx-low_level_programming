#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if a letter is lower
 * @c : the number to be checked
 *
 * Return: 0(success)
 */
int _islower(int c)
{
	if (c == tolower(c))
		return (1);
	else
		return (0);
	

}
