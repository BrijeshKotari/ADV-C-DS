#include "main.h"

Status multiply(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headR, dlist **tailR, int len1, int len2)
{
	int num,n,count = 0 ;
	int k = 1;
	len1 = 1;
        if (insert_at_first(headR,0,tailR) == success);

	dlist *tailR1=*tailR;
	dlist *tail11=*tail1;
	while(*tail2)
	{
		num = (*tail2)->data;
		while(num)
		{
			n = num % 10;
			num = num / 10;
			n = n * k;
			while(n--)
			{       
                 *tailR = tailR1;
                 *tail1 = tail11;

                          
				if (maddition(headR, tailR, head1, tail1, len1, len2) == success);
		    
			   if(count == 0)
				{
				len1 = len2;
				}
				else
				{
					len1 = len1 + 1;
				}
				count++;
			}
			k = k * 10;
		}
		*tail2 = (*tail2)->prev;
	}
	return success;
}
