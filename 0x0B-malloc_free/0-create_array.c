#include <stdlib.h>
#include "main.h"

/**
 * create-array - creates an array
 * @size: determine the size
 * @c: char to be accepted
 *
 * Return: pointer to the addres of the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int index;

	p = malloc(sizeof(int) * size + 1);
	for (index = 0 ; index < size; index++)
	{
		p[index] = c;
	}
	return (p);
}
