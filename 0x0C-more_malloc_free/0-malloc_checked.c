#include "main.h"

/**
* malloc_checked - this function allocates memory using malloc
* @b: integer argument
*
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
