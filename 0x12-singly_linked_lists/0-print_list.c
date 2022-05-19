#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the start of the list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int n;
	const list_t *temp;

	temp = h;
	for (n = 0 ; temp; n++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (n);
}
