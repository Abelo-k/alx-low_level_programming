#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
/**
 * main - prints alphabets
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	char a = 'A';

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(tolower(a));
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
