#include "main.h"

/**
 * mul - Multiplies two integers and returns the result.
 * @a: First integer to be multiplied.
 * @b: Second integer to be multiplied.
 *
 * Return: The result of the multiplication.
 */
int mul(int a, int b)
{
if (a < 0 || b < 0)
{
printf("Error: Both inputs must be non-negative integers.\n");
return (-1);
}
int result = a * b;
return (result);
}

