#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: number of characters
* @c: initial array character
* @Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char* p 
	
	p = malloc(size * sizeof(char));
	p[0] = c;
	if (size == 0)
	{
		return (0);
	}
	return (p);
}
