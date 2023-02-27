#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int tmp = s[0];
	int count = 0;
	int index;

	while (s[count] != '\0')
	{
		count++;
	}
	for (index = 0; index < count; index++)
	{
		count--;
		tmp = s[index];
		s[index] = s[count];
		s[count] = tmp;
	}
}
