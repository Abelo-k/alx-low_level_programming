#include "main.h"
/**
 * strint_toupper - change lower case to upper case
 *
 * @ptr: pointer
 *
 * Return: @ptr
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] -= 32;
		}
	}
	return (ptr);
}
