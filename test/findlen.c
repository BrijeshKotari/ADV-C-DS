#include "main.h"

int findlen(dlist **head,dlist **tail)
{
	dlist *head1 = *head;
	int count = 0;
	while(*head)
	{
      count++;
      (*head) = (*head)->next;
	}
        *head = head1;
	return count;
       
}
