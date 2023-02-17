#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints HexaDecimal
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	int num = 0;

	char ch = 'A';

	for (num = 0; num < 10; num++)
	{
		putchar((num) + '0');
	}

	for (ch = 'A'; ch <= 'F'; ch++)
	{
		putchar(tolower(ch));
	}
	putchar('\n');
	return (0);
}
