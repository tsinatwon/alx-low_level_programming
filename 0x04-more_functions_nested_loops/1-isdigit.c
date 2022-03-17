#include "main.h"

/**
 * _isdigit check if parmeter is digit
 *
 * Return: 1 if c digit
 */
int _isdigit(int c)
{	
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
