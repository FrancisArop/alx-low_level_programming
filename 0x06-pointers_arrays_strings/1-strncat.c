#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int Arop;
	int Magood;

	Arop = 0;
	while (dest[Arop] != '\0')
	{
		Arop++;
	}
	Magood = 0;
	while (Magood < n && src[Magood] != '\0')
	{
	dest[Arop] = src[Magood];
	Arop++;
	Magood++;
	}
	dest[Arop] = '\0';
	return (dest);
}

