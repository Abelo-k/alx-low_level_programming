#include "main.h"
/**
 * more_numbers - prints (0-14) ten times
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14 ; a++)
	{
		_putchar(a + '0');
		_putchar('\n');
	}
	_putchar('\n');
}