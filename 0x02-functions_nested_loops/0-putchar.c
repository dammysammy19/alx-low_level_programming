#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *text = "_putchar";
	int i = 0;

	while (text[i])
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
