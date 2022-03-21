#include "main.h"

/**
 * puts2 - prints every other character
 * @str: character to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	while(*str)
	{
		_putchar(*str);
		*str++;	
	}
}
