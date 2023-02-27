#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of array
 * @n: sizeof array
 * @a: pointer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int b = n - 1;
	int num;

	for(num = 0; num < n ; num++)
	{
		printf("%d", a[num]);
		if (num == b)
			continue;
		printf(", ");
	}
	printf("\n");
}
