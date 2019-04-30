#include "main.h"

Status dsubstraction(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, int len1, int len2)
{
	dlist *tail11 = *tail1;
        dlist *tail22 = *tail2;
        int temp;
	if(compare(head1,tail1,head2,tail2,len1,len2) == EQUAL)
	{
                if(delete_all(head1,tail1)==success);
		if (insert_at_first(head1,0,tail1) == success);
		return success;
	}
    
    while (*tail2)
	{
		if((*tail1)->data < (*tail2)->data)
		{
		(*tail1)->data = (10000 + ((*tail1)->data)) - ((*tail2)->data);
		(*tail1)->prev->data = (*tail1)->prev->data - 1;
		}
		else
		{
			(*tail1)->data = (*tail1)->data - (*tail2)->data;
		}
		
		*tail1 = (*tail1)->prev;
		*tail2 = (*tail2)->prev;
                 
	}
        *tail1 = tail11;
        *tail2 = tail22;
	return success;
}