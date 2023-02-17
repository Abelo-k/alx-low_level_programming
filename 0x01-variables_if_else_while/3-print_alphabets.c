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
	char b = tolower(a);

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(tolower(a));
	}
	putchar('\n');
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	return (0);
}
