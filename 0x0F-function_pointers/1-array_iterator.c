#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* on each element of the array
* @array: pointer to array
* @size: size of array
* @action: pointer to a function to be executed
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
