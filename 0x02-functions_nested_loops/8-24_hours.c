#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer's day (00:00 - 23:59)
 * @j && @k: Contains the value to be printed
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int j;
	int k;

	for (j = 0; j < 24; j++)
	{
		for (k = 0; k < 60; k++)
		{
			_putchar (j / 10 + '0');
			_putchar (j % 10 + '0');
			_putchar (':');
			_putchar (k / 10 + '0');
			_putchar (k % 10 + '0');
			_putchar ('\n');

		}
	}
}
