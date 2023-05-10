#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_cycle - function that checks if a singly linked list has a cycle
 * @list: pointer to the head of the list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *fast = list;

	while (fast && fast->next)
	{
		list = list->next;
		fast = fast->next->next;

		if (list == fast)
			return (1);
	}

	return (0);
}

