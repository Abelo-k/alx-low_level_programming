#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: integer
 *
 * Return: sqrtof n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

/**
 * square_root - checks perfect root
 * @n: integer
 * @i: integer
 *
 * Return: perfect square root
 */
int square_root(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (square_root(n, i + 1));
}
