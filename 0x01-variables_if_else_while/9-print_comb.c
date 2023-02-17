#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints numbers separated by comma
 *
 * Return: 0(sucess)
 *
 */
int main(void)
{
	int a = 0;

	for (a = 0; a <= 10; a++)
	{
		putchar((a) + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
