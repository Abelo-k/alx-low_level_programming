#include "main.h"
/**
 * _strncpy - copies one value of string to another
 * @dest: destination
 * @src: source
 * @n: integer value;
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	while (src[i++])
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = src[len]; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
