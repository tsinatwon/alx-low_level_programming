#include "main.h"

/**
 * swap_int - swaps to values
 *
 * @a: vales to be intechanged
 * @b: values to be interchanged
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
