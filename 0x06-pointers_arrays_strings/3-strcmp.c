#include "main.h"

/**
* _strcmp - this function compares two strings
* @s1: input parameter
* @s2: input parameter
* Return: b
*/

int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;
	while ( s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return b;
