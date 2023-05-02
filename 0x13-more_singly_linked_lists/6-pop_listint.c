#include "lists.h"

/**
 * pop_listint - it deletes the head node of a linked list
 * @head: the pointer to the first element in the linked list
 *
 * Return: data inside the elements that was deleted,
 * or 0 for empty lists
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
