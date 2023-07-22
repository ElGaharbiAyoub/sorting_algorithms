#include "sort.h"

/**
 * insertion_sort_list - inserts right unsorted side into left sorted side
 * @list: doubly linked list to sort
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *next;

	if (!(*list) || !(*list)->next)
		return;

	current = *list;
	current = current->next;

	while (current)
	{
		next = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			prev = current->prev;
			prev->next = current->next;

			if (current->next)
				current->next->prev = prev;

			current->next = prev;
			current->prev = prev->prev;

			if (prev->prev)
				prev->prev->next = current;

			prev->prev = current;

			if (!current->prev)
				*list = current;

			print_list(*list);

			prev = current->prev;
		}
		current = next;
        current ? (next = current->next) : (next = NULL);
	}
}
