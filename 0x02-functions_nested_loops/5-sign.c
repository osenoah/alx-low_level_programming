#include "main.h"

/**
 * print_sign - Function that prints the sign of a number
 * @n: Contains value to be compared
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}

	return (0);
}

