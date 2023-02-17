#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
/**
 * main - prints lower case letters
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	char a = 'A';

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(tolower(a));
	}

	putchar('\n');
	return (0);

}
