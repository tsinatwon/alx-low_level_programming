#include "main.h"

/**
 * print_numbers - print all digit
 *
 * Return: void
 */

void print_numbers(void)
{	
	int count ;

	for (count = 48; count < 58; count++)
	{	
		_putchar(count);
	}
	_putchar('\n');
}
