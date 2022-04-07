#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: determine the size
 * @c: char to be accepted
 *
 * Return: pointer to the addres of the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int index;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		p[index] = c;
	}
	return (p);
}
