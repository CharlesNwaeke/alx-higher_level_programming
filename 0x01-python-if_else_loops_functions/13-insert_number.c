#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - function that inserts a number into a sorted singly linked list
 * @head: pointer to the head of the linked list
 * @number: data of the new node
 * Return: address of the new node or NULL if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *current, *previous = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = number;
	new_node->next = NULL;

	current = *head;

	while (current != NULL && current->n < number)
	{
		previous = current;
		current = current->next;
	}

	if (previous == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current;
		previous->next = new_node;
	}

	return (new_node);
}

