#include "main.h"
/**
 * _puts - prints string
 * @str: string
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
