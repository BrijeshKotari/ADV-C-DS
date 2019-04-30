#include "main.h"

Status delete_all(dlist **head,dlist **tail)
{
	if(*head == NULL)
	{
		return list_empty;
	}

	dlist *temp = *head;
	while(*head)
	{
		temp = *head;
                *head = temp->next;
                 free(temp);
	}
        *tail = *head;
	return success;
}
