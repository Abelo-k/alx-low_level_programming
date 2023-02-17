#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints alphabet without E and Q
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	char a = 'A';

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == 'E')
			continue;
		if (a == 'Q')
			continue;
		putchar(tolower(a));
	}
	putchar('\n');
	return (0);
}
