#include "sort.h"

/**
 * swap_nodes - Function that swaps two nodes
 * @list: head of the list
 * @n1: First node
 * @n2: Second node
 */
void swap_nodes(listint_t **list, listint_t *n1, listint_t *n2)
{
	n1->next = n2->next;
	n2->prev = n1->prev;
	if (n2->next != NULL)
		n2->next->prev = n1;
	n2->next = n1;
	n1->prev = n2;
	if (n2->prev != NULL)
		n2->prev->next = n2;
	else
		*list = n2;
}

/**
 * insertion_sort_list - Use insertion algo to sort a list
 * @list: The list to sort (Pointer to it head)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *next;

	if (!list || !*list || !(*list)->next)
		return;

	cur = (*list)->next;
	while (cur)
	{
		next = cur->next;
		while (cur->prev != NULL && cur->n < cur->prev->n)
		{
			swap_nodes(list, cur->prev, cur);
			print_list(*list);
		}
		cur = next;
	}
}
