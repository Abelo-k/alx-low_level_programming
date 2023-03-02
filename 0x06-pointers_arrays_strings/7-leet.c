#include "main.h"
/**
 * leet - encodes string to 1337
 * @ptr: char pointer
 *
 * Return: @ptr
 */
char *leet(char *ptr)
{
	int i, j;

	char str[] = "aAeEoOtTlL";
	char ch[] = "4433007711";

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ptr[i] == str[j])
			{
				ptr[i] = ch[j];
			}
		}
	}
	return (ptr);
}
