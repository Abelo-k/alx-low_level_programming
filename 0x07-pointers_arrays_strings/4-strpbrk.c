#include "main.h"
/**
 * _strpbrk - searche for string
 * @s: original string
 * @accept: string to be searched for
 *
 * Return: @accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
