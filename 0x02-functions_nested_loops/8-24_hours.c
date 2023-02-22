#include "main.h"
/**
 * jack_bauer - prints minutes
 *
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar((a / 10) + '0'));
			_putchar((a % 10)  + '0'));
			_putchar(':');
			if (a == 23 && b == 59)
				continue;
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
	}
}
