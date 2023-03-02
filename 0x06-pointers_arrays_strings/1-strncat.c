#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: destination
 * @src: source
 * @n: byte
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (dest[len] != '\0')
	{
		++len;
	}
	for (i = 0; src[i] != '\0' && i < n; ++i, ++len)
	{
		dest[len] = src[i];
	}
	return (dest);
}
