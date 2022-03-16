#include "main.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @r: r is an integer
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int n = r % 10;

	if (n < 0)
	{
		r = r * -1
		_putchar ('-');
	}

	_putchar(n + 48);
	return (n);
}
