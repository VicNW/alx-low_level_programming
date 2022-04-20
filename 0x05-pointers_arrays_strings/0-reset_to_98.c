#include "main.h"

/**
* void - this function takes a pointer to an int as parameter,
* and updates the value it points to 98.
* Return: void, there is no return value.
*/

void reset_to_98(int *n)
{
	
	*n = 98;
	char m = *n + '0';
	_putchar(m);
}
