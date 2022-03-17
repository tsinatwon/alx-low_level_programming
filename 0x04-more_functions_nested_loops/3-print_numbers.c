#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: Always (0)
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
