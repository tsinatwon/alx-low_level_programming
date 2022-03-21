#include "main.h"

/**
 * _strlen - calculate the length of string
 * @s: accepts input as pointer
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while(*s != EOF)
	{
		count++;
	}	
	return (count);
}
