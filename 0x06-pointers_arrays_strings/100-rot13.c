#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoding rot13
 * @ptr: pointer
 *
 * Return: @ptr
 */
char *rot13(char *ptr)
{
	int i, j;

	char str[] = "ABXDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCEDFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (ptr[i] == str[j])
			{
				ptr[i] = rot13[j];
				break;
			}
		}
	}
	return (ptr);
}
