#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints combination of three digits without repitition
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a == 7 && b == 8 && c == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
