#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char c = 'a';

	while (times < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
	times++;
}
