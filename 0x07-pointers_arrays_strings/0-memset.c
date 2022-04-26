#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: input pointer to string
* @b: input char to b used to fill the memory
* @n: number of times to fill the memory
* Return: pointer to string
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;
	
	for( ; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
