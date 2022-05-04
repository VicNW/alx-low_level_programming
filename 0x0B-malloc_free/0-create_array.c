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

	if (size != 0)
	{
		for (i = 1; i < size; i++)
		{
			p = malloc(size * sizeof(char));
			p[i] = c;
			return (p);
		}
	}
	p[0] = c;
	return (0);
}
