#include "main.h"

/**
* reverse_array - this function reverse an array
* @a: array input
* @n: size of array
* Return: reverse
*/

void reverse_array(int *a, int n)
{
	int remainder;
	int reverse = 0;
	
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	return reverse;
}
