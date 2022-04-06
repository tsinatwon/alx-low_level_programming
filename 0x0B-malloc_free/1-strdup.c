#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - duplicates the given param
 * @str: string to be duplicated
 *
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	int strlen = 0, index;
	char *p;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		strlen++;
	}
	strlen++;
	p = malloc(sizeof(char) * strlen);

	if (p == NULL)
		return (NULL);
	for (index = 0; index <= strlen; strlen++)
		p[index] = str[index];
	return (p);
}
