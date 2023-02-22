#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @num: lastdigit
 *
 * Return: @num
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num * -1;
		_putchar((num % 10) + '0');
		return (num % 10);
	}
	else
	{
		_putchar((num % 10) + '0');
		return (num % 10);
	}
}
