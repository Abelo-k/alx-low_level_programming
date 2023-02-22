#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @num: lastdigit
 *
 * Return: @num
 */
int print_last_digit(int num)
{
	int a;

	if (num < 0)
	{
		a = (num % 10) * -1;
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar((num % 10) + '0');
		return (num % 10);
	}
}
