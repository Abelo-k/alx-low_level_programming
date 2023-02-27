#include "main.h"
/**
 * puts2 - prints chachters jumping another
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	char *ch = str;
	int count = 0;
	int num;

	while (*ch != '\0')
	{
		count++;
		ch++;
	}
	for (num = 0; num < count; num++)
	{
		if (num % 2 == 0)
			_putchar(str[num]);
	}
	_putchar('\n');
}
