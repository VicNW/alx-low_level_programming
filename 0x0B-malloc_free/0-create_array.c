#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: number of characters
* @c: initial array character
* Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	if (size == 0)
	{
		return (0);
	}
	return (p);
}
