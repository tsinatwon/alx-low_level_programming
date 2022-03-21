#include "main.h"

/**
 * _puts - print string
 * @str: character to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '0')
	{
		_putchar(*str);
		*str++;
	}
}
