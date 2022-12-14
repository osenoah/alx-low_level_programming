#include "main.h"

/**
  * _islower - Entry point
  * Description: Checks for lowercase character.
  * @c: Contains value to be compared
  * Return: Always 0 (Success)
  */ 

int _islower(int c)
{
	/* ASCII value of lower case letters is between 97 & 122 */
	if (c >=  97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
