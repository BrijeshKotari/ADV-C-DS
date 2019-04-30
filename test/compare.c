#include "main.h"

Status compare(dlist **head1,dlist **tail1,dlist **head2,dlist **tail2,int len1,int len2) 
{
	if(len1 > len2)
	{
		return GREATER;
	}
	else if(len1 < len2)
	{
		return LESSER;
	}
	else
	{
		while(*head1)
		{
			if((*head1)->data > (*head2)->data)
			{
				return GREATER;
			}
			else if((*head1)->data < (*head2)->data)
			{
				return LESSER;
			}
                 *head1 = (*head1)->next;
                  *head2 = (*head2)->next;
		}
	}
	return EQUAL;
}
