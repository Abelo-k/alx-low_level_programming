#include "main.h"
/**
 * char *_strcpy - copy onestring to another POINTER
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int num = 0;
	int a;

	while (*(src + num) != '\0')
	{
		num++;
	}
	for (a = 0; a < num; a++)
	{
		dest[a] = src[a];
	}
	dest[num] = '\0';
	return (dest);
}
