#include "main.h"
/**
 * _abs - calculate absolute value
 *@a: number for calculation
 *
 * Return: 0(success)
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
		return (a);
}
