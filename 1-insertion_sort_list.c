#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using an
 * insertion sort algorithm.
 *
 * @list: Is the list to be sorted.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *temp;

	if (*list == NULL || (*list) == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while (node->prev != NULL && node->prev->n > node->n)
		{
			temp = node->prev;
			node->prev = temp->prev;
			if (node->next != NULL)
				node->next->prev = temp;
			temp->next = node->next;
			node->next = temp;
			if (temp->prev != NULL)
				temp->prev->next = node;
			temp->prev = node;
			if (!node->prev)
				*list = node;
			print_list(*list);
		}
		node = node->next;
	}
}
