#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t node = *list, temp;

	if (*list != NULL || (*list)->next != NULL)
	{
		traverse = node;
		while (node->n < node->prev->n)
		{
			temp_n = node->next;
			temp_node = node;
			node = node->prev;
			node->next = temp_node;
			temp_node->next = temp_n;
			temp_n->prev = temp_node;
			print_list(**list);
		}
		node = traverse->next;
	}
}
