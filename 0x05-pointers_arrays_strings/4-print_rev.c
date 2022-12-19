#include "main.h"
/**
 * print_rev - imprime en reversa
 * @yak: string
 * return: 0
 */
void print_rev(char *yak)
{
	int longi = 0;
	int o;

	while (*yak != '\0')
	{
		longi++;
		yak++;
	}
	yak--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*yak);
		yak--;
	}

	_putchar('\n');
}


