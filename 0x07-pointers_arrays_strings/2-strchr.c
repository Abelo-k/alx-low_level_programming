#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: pointer
 * @c: charcter to look for
 *
 * Return: @s
 */
char *_strchr(char *s, char c)
{
	int i, j;

	while (s != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		if (s[i] == c)
		{
			s[i] = c;
		}
	}
	return (s);
}
