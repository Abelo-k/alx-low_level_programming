#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - prints alphabets
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	char a = 'A';

	for (char a = 'A'; a <= 'Z'; a++)
	{
		putchar(tolower(a));
	}
	putchar("\n");
	for (char a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	return (0);
}
