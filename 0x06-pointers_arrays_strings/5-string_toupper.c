#include "main.h"
/**
 * strint_toupper - change lower case to upper case
 *
 * @ptr: pointer
 *
 * Return: @ptr
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
