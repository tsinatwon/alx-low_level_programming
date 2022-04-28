#include "main.h"
/**
 * binary_to_uint - converts binary to decimal
 * @b: the string to be converted 
 * 
 * Returns: the converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
  unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);  
}