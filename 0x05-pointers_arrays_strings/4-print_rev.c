#include "main.h"
/**
 * print_rev - printes reverse of string
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int num;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (num = count; num > 0; num--)
	{
		_putchar(*s);
		s--
	}
	_putchar('\n');
}
