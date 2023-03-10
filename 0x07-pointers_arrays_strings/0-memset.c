#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: points to memory
 * @b: constant byte
 * @n: byte
 *
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
