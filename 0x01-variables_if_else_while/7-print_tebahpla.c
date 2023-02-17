#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints reverse alphabets
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	char a = 'A';

	for (a = 'Z'; a >= 'A'; a--)
	{
		putchar(tolower(a));
	}
	putchar('\n');
	return (0);
}
