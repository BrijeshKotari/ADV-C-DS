#include "main.h"

Status insert_at_first(dlist **head, data_t data,dlist **tail)
{
	dlist *new = malloc(sizeof(dlist));

	if(new == NULL)
	{
		return failure;
	}
	new -> data = data;
	new -> prev = NULL;
	new -> next = *head;
	if(*head == NULL)
	{
		*head = new;
		*tail = new;
		return success;
	}
	(*head)->prev = new;
	*head = new;
    return success;
}


