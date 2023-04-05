#include <stdlib.h>
#include "lists.h"

/**
*delete_nodeint_at_index-Deletes the node at index of a listint_t linked list.
* @head: A pointer to a pointer to the head node of the list.
* @index: The index of the node to delete. Index starts at 0.
*
* Return: 1 if successful, -1 otherwise.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;
	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (i != index)
		return (-1);

	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;

	free(current);
	return (1);
}
