#include "main.h"
/**
 * binary_to_uint - converts binary to decimal
 * @b: the string to be converted 
 * 
 * Returns: the converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int len, total, decimal;
    int  i;
    total = 0;
    decimal = 1;
    
    while (!b)
        len++;
    for ( i = len - 1; i >= 0; i--)
    {
        if(b[i] == '1')
            {
                total += decimal;
                decimal *= 2;
            }
    }
    return (total);
}