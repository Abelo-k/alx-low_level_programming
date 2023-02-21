#include "main.h"
#include <ctype.h>
/**
 * print_alphabet - prints a-z
 *
 */
void print_alphabet(void)
{
	for (char c = 'A'; c <= 'Z'; c++)
	{
		_putchar(tolower(c));
	}
	_putchar('\n');
}
