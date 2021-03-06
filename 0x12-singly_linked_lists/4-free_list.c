#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - free list
 *
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != 0)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
