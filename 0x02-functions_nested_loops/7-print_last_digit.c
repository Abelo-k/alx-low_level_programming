#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @num: lastdigit
 *
 * Return: @num
 */
int print_last_digit(int num)
{
	_putchar((num % 10) + '0');
	return (num % 10);
}
