#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: a pointer to string one
* @src: a pointer to string two
* @n: number of iterations
* Return: dest
*/

char *_strcat(char *dest, char *src, int n)
{
	int i, j;
	i = 0;
	
	while (dest[i] != 0)
	{
		i++
	}
	j = 0;
	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
