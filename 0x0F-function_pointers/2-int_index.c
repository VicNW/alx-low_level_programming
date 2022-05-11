#include "function_pointers.h"

/**
* int_index returns the index of the first element for which the 
* cmp function does not return 0
* @array: pointer to an array
* @size: number of elements in the array
* @cmp: pointer to a function to be used to compare values
*
* Return: sucessful (0)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if array[i] == com()
		{
			exit(i)
		}
		return (-1)
	}
}

