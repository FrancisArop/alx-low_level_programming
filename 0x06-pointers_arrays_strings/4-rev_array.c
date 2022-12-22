#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int Cisco;
	int Cisco1;

	for (Cisco = 0; Cisco < n--; Cisco++)
	{
		Cisco1 = a[Cisco];
		a[Cisco] = a[n];
		a[n] = Cisco1;
	}
}

