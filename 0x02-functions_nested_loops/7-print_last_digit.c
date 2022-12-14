#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit
 * @j: The last digit of this value is what we're looking for
 * Return: Always 0 (Success)
 */

int print_last_digit(int j)
{
	int last_digit;

	if (j < 0)
	{
		last_digit = (-1 * (j % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = (j % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
