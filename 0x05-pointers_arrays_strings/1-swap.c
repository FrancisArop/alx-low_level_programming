#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @cisco1: integer to swap
 * @cisco2: integer to swap
 */
void swap_int(int *cisco1, int *cisco2)
{
	int m;

	m = *cisco1;
	*cisco1 = *cisco2;
	*cisco2 = m;
}
