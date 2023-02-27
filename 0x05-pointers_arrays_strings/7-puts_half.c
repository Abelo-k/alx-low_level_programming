#include "main.h"
/**
 * puts_half - prints 2nd half of string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	char *ch = str;
	int count = 0;
	int num;

	while (*ch != '\0')
	{
		count++;
		ch++;
	}
	if (count % 2 != 0)
		count = count - 1;

	for (num = 0; num <= count; num++)
	{
		if (num >= count / 2)
			_putchar(str[num]);

	}
	_putchar('\n');
}
