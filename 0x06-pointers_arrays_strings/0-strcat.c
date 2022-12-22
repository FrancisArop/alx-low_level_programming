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
	int Yak;
	int Arop;

	Yak = 0;
	while (dest[Yak] != '\0')
	{
		Yak++;
	}
	j = 0;
	while (src[Arop] != '\0')
	{
		dest[Yak] = src[Arop];
		Yak++;
		Arop++;
	}

	dest[Yak] = '\0';
	return (dest);
}
