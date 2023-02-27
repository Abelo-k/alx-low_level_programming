#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates valid password
 *
 * Return: 0 sucess
 */
int main (void)
{
	int key[8];
	int i, j;

	srand(time(NULL));

	for (i=0; i<=8; i++)
	{
		key[i] = rand() % 10;
	}
	for (j = 0; j < 8; j++)
	{
		printf("%d ", key[j]);
	}
	return (0);
}
