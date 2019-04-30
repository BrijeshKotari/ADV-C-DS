#include "main.h"

Status delete_at_first(dlist **head)
{
       dlist * temp;
	if(*head == NULL)
	{
		return list_empty;
	}
         if((*head)->next == NULL)
        {
             temp = *head;
              *head = NULL;
             
         }
	temp = *head;
	*head = temp->next;
        (*head)->prev = NULL;
	free(temp);
	return success;
}
