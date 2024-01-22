#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: A pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *crnt_node, *prev_node, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

crnt_node = (*list)->next;

while (crnt_node != NULL)
{
temp = crnt_node;

while (temp->prev != NULL && temp->n < temp->prev->n)
{
prev_node = temp->prev;


if (temp->next != NULL)
temp->next->prev = prev_node;
prev_node->next = temp->next;

temp->prev = prev_node->prev;
temp->next = prev_node;
if (prev_node->prev != NULL)
prev_node->prev->next = temp;
prev_node->prev = temp;

if (temp->prev == NULL)
*list = temp;

print_list(*list);
}

crnt_node = crnt_node->next;
}
}
