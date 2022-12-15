#include <stdio.h>

/**
 * main - Entry point
 * purpose - fibonacci
 * Return: (0) always
 */
int main(void)
{
unsigned long int lim = 4000000;
unsigned long int bef = 0;
unsigned long int aft = 1;
unsigned long int R = 0;
unsigned long int sum = 0;

															while (lim > R)
																		{
															R = bef + aft;

															if ((R % 2) == 0)
															{
																														sum += R;
																														}

															bef = aft;
																														aft = R;
																																	}
															printf("%li\n", sum);
															return (0);
}
