#include "main.h"

/**
 * _islower - checks for lowercsse letters
 *
 * @x: x is an ascii character
 *
 * Return: Always 0 (Success)
 */

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
