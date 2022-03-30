#include "main.h"

/**
 * _strlen_recursion - prints string in reverse
 *@s: the string to be printes
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
