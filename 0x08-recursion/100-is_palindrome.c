#include "main.h"

/**
 * _strlen_recursion - returns lenth of a string
 * @s: string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		n = n + _strlen_recursion(s + 1);
	}

	return (n);
}

/**
 * is_pal - checks if a string is palindrome
 * @s: string
 * @i: integer
 * @len: length
 *
 * Return: 0 or 1
 */
int is_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (is_pal(s, i + 1, len - 1));
}
/**
 * is_palindrome - cheks palindrome
 * @s: string
 *
 * Return: - 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_pal(s, 0, _strlen_recursion(s)));
}
