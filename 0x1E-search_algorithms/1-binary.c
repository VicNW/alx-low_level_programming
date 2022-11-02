#include "search_algos.h"

void print(int *array, size_t size, size_t lo);

/**
 * binary_search - funtion to divide an array into 2
 * @array: array to be searched
 * @size: length of the array
 * @value: value to be searched for
 * Return: Returns -1 if value not found else return index of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;

	if (array || size > 0)
	{
		print (array, hi, lo);
		while (lo < hi)
		{
			int mid = (hi + lo) / 2;

			if (value < array[mid])
			{
				hi = mid;
			}
			else if (value > array[mid])
			{
				lo = mid + 1;
			}
			else if (value == array[mid])
			{
				return (mid);
			}
			print(array, hi, lo);
		}
	}
	return (-1);
}

/**
 * print - to print the array
 * @size: length of the array
 * @lo: lower bound of the array
 * @array: array to be printed
 * Return: void
 */

void print(int *array, size_t size, size_t lo)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i < size; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("%i\n", array[size]);
}
