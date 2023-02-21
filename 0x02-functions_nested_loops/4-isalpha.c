#include "main.h"
/**
 * _isalpha - check if it is a letter
 * @c: The variabele that is to be checked
 *
 * Return: 1(letter) or 0(!letter)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
