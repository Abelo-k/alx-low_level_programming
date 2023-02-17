#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints combination of two digits witout repitition
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; a < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
