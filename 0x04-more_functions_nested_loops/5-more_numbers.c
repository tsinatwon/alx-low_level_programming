#include "main.h"

/**
 * more_numbers - prints numbers certain times
 *
 * Return: void
 */
void more_numbers(void)
{	
	int outer;

	for (outer = 0; outer <= 10; outer++)
	{	
		int inner;

		for (inner = 0; inner < 14; inner++)
		{	
			_putchar(inner + '0');
		}
		_putchar('\n');
	}
}
