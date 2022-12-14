#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: print alphabet in lowercase, 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
char alphabet;
int count = 0;

while (count <= 9)
{
	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

count++;
_putchar('\n');
}
}
