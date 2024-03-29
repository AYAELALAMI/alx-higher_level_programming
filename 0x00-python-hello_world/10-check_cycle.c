#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - will check if the list is cyclical
 * @list: pointer to the list for it to check
 * Return: 1 if cyclical, 0 it is not cyclical
 */
int check_cycle(listint_t *list){
	listint_t *slow = list, *fast = list;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}

