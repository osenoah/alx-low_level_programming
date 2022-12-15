#include <stdio.h>
/**
 * main - print first 50 fibonacci
 * Return: 0 always.
 */
int main(void)
{
long int i, p = 1, q = 2, sum = 0;
for (i = 0; i < 49; i++)
{
printf("%ld, ", p);
sum = p + q;
p = q;
q = sum;
if (i == 48)
printf("%ld\n", p);
}
return (0);
}
