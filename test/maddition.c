#include "main.h"

Status maddition(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, int len1, int len2)
{
	int temp = 0,carry,rem;
	while (*tail1 && *tail2)
	{
		carry = temp/10000;
		//printf ("carry:%d\n", carry);
		temp = carry + ((*tail1)->data) + ((*tail2)->data);		
	
		rem = temp % 10000;
		(*tail1)->data = rem;
                 
		*tail1 = (*tail1)->prev;
		*tail2 = (*tail2)->prev;
                 
                //printf("tail1data-%d\n",(*tail1)->data);
                 //printf("tail2data-%d\n",(*tail2)->data);
	}
	carry = temp/10000;
	if (len1 > len2)
	{
		while (*tail1)
		{
			temp = (*tail1)->data+carry;
                        carry=temp/10000;
                        temp = temp % 10000;
			(*tail1)->data = temp;
			*tail1 = (*tail1)->prev;
		}
	}
	else if (len1< len2)
	{
		while (*tail2)
		{
			temp = (*tail2)->data + carry;
                        carry = temp/10000;
                        temp = temp % 10000;                    
			if (insert_at_first(head1,temp,tail1) == success)
			{
			//	printf ("New result node linked\n");
			}
			*tail2 = (*tail2)->prev;
		}
	}
	else
	{
	    printf(" ");	
	}
        if (carry &&( insert_at_first(head1,carry,tail1) == success))
		{
		//	printf ("New result node linked\n");
		}
	return success;
}
