#include "main.h"
/**
 * reverse_array - reverse the elements of array
 * @a: array
 * @n: size of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
