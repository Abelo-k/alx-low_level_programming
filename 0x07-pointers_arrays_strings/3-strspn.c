#include "main.h"

/**
 * _strspn - counts lengthof a sub string
 * @s: string
 * @accept: substring
 *
 * Return: length of substring;
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
			s++;
		}
	}
	return (n);
}
