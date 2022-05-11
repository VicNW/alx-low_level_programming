#include "function_pointers.h"

/**
* array_iterator - executes a funtion
* @array: pointer to array
* @size: size of array
* @action: pointer to a function to be executed
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != NULL & action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
