#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a doubly linked list
 *
 * @list: list
 */
void print_list(listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		i++;
		list = list->next;
	}
	printf("\n");
}
