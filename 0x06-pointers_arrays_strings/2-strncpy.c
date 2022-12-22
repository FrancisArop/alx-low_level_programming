#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int Magood;

	Magood = 0;
	while (Magood < n && src[Magood] != '\0')
	{
		dest[Magood] = src[Magood];
		Magood++;
	}
	while (Magood < n)
	{
		dest[Magood] = '\0';
		Magood++;
	}

	return (dest);
}

