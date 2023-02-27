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
	int num, a;

	while (*ch != '\0')
	{
		count++;
		ch++;
	}
	num = (count / 2);

	if (count % 2 != 0)
		num = ((count + 1) / 2);

	for (a = num; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
