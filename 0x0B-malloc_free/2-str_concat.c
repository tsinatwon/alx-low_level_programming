#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatnates two string
 * @s1: first string to be concatnated
 * @s2: last string to be concatnated
 *
 * Return: combined string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int strlen1 = 0, strlen2 = 0, index, size = 0;

	if (*s1 == '\0')
		s1 = "";
	if (*s2 == '\0')
		s2 = "";
	while (s1 && s1[strlen1])
		strlen1++;
	while (s2 && s2[strlen2])
		strlen2++;
	size = strlen1 + strlen2 + 1;

	if (size == 0)
		return (0);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (index = 0; index <= size ; index++)
	{
		if (index < strlen1)
			p[index] = s1[index];
		else if(index >=  strlen1 && index < size)
			p[index] = s2[index - strlen1];
		else
			p[index] = '\0';
	}
	return (p);
}

