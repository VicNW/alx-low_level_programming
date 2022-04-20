#include "main.h"

/**
* swap_int - this function swaps the values of two integers
* @a: pointer
* @b: pointer
* Return: void.
*/

void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
