#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints last digit of a number
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("last digit of %d is %d and is greaterthan 5", n, last_digit);
	}
	else if (last_digit < 6)
	{
		printf("last digit of %d is %d an is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
