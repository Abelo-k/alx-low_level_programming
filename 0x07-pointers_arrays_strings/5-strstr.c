#include "main.h"
/**
 * _strstr - locates a string;
 * @haystack: string
 * @needle: string to be located
 *
 * Return: @haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[i])
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
