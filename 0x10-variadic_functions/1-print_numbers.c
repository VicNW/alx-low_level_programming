#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* void print_numbers - prints numbers, followed by a new line.
* @separator: string to be printed between numbers 
* @n: number of parameters
*
* Return: sum of all parameters
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d",va_arg(valist, int));
		if (i < n - 1 && separator)
		printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
