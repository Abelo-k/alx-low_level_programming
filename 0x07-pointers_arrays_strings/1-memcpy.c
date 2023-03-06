#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes from memory
 *
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
