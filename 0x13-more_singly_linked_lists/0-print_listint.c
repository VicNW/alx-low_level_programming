#include "lists.h"
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	temp = h;
	int count;

	for (count = 0; temp; count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
