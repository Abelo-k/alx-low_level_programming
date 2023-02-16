#include <stdio.h>
#include <unistd.h>
/**
 * main - prints quote
 * Return: 1 (suscess)
 */
int main(void)
{
	write(2, "amd that piece of art is useful -Dora Korpar, 2015-10-18\n", 58);
	return (1);
}
