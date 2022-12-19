#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @kuol: array name
 * @deng: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *kuol, int deng)
{
	int i;

	for (i = 0; i < (deng - 1); i++)
	{
		printf("%d, ", kuol[i]);
	}
		if (i == (deng - 1))
		{
			printf("%d", kuol[deng - 1]);
		}
			printf("\n");
}

