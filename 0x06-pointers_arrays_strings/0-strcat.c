#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int r;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	j = 0;
	while (src[r] != '\0')
	{
		dest[a] = src[r];
		a++;
		r++;
	}

	dest[a] = '\0';
	return (dest);
}

