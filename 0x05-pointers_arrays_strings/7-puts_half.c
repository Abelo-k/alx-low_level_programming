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

	for (num = 0; str[num] != '\0'; num++)
	{
		if (num >= count / 2)
		{
			if (count % 2 == 0)
				_putchar(str[num]);
			else
			{
				count = count - 1;
				_putchar(str[num]);
			}
		}
	}
	_putchar('\n');
}
