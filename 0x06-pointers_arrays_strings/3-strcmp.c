#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int Francis;

	Francis = 0;
	while (s1[Francis] != '\0' && s2[Francis] != '\0')
	{
		if (s1[Francis] != s2[Francis])
		{
			return (s1[Francis] - s2[Francis]);
		}
		Francis++;
	}
	return (0);
}

