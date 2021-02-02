#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *temp_n, *traverse, *temp_p;

	while (*list != NULL || (*list)->next != NULL)
	{
		node = *list;
		traverse = node;
		if (traverse->next != NULL)
			temp_n = node->next;
		while (node->n < node->prev->n)
		{
			temp_p = node->prev;
			node = node->prev;
			node->next = temp_p;
			node->prev = temp_p->prev;
			temp_p->prev = node;
			if (traverse->next != NULL)
				temp_p->next = temp_n;
			else
				temp_p->next = NULL;
			print_list(*list);
		}
		if (traverse->next != NULL)
			node = traverse->next;
	}
}
