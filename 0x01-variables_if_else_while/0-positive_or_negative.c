#include <stdlin.h>
#include <stdio.h>
#include <time.h>
/**
 * main - check if a number is positive or negative
 *
 * Return: 0(Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_max / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
