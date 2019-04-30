#include "main.h"

int  division(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, int len1, int len2)
{

	int count = 0;
	len2 = findlen(head2,tail2);
	
	while(1)
	{
		len1 = findlen(head1,tail1);
		if (dsubstraction(head1, tail1, head2, tail2, len1, len2) == success);
		count++;
                len1 = findlen(head1,tail1);
		
		if((*head1)->data == 0 && (len1 > 1))
		{
			delete_at_first(head1);
		}
                 len1 = findlen(head1,tail1);
	         if(compare(head1,tail1,head2,tail2,len1,len2) == LESSER)
		{
			return count;
		}

	
	}

}
  
  
