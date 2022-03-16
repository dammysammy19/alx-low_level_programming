#include "main.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @r: r is an integer
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n =(r % 10) * -1;
	else
		n = r % 10;

	_putchar(n + '0');

	return (n);
}
