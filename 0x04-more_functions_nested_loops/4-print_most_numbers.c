#include "main.h"

/**
 * _print_most_numbers - print most numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{	
	char i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i ==  4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
