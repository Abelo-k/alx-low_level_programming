#include "main.h"

/**
 * is_prime_number - check if a number is prime
 * @n: integer
 * @i: integer
 *
 * Return: 0 or 1
 */
int prime_num(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

/**
 * prime_num - check prime number
 * @i: integer
 * @n: integer
 *
 * Return: i
 */
int prime_num(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_num(n, i - 1));
}
