#include "main.h"
#include <stdlib.h>

/**
 * _abs -prints the absolute value
 * @n: n is an integer
 *
 * Return: Always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
