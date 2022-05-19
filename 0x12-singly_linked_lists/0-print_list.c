#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list
* @h: string input
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int n;
	const list_t *temp;
	
	temp = h;
	for (n = 0 ; temp; n++)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (n);
}
