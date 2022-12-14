#include "main.h"
/*
 * print_alphabet_x10 - print alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int 10;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n')
	}
}
