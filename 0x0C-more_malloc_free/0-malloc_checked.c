#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - checks if the  memory allocation is not empty
 * @b: the size of memory to be located
 *
 * Return: null if failure or addres of memory if success
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
