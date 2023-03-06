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
	int i = 0, j;

	while (s[i] != '\0')
	{
		j++;
	}
	for (; i < j; i++)
	{
		if (s[i] == c)
		{
			s[i] = c;
		}
	}
	return (s);
}
