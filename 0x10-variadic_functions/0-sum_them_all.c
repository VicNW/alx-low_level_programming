#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of arguments
*
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	unsigned int i, sum;
	
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_n(ap, unsigned int);

	va_end(ap);
	return (sum);
}
