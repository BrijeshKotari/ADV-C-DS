#include "main.h"

void createlink(char *a,dlist **head,dlist **tail)
{
	char buff[5]={0};
	int i,temp=0;
        int j;
	int count=strlen(a);

	while(count >=4)
	{
		memset(buff,0,4);
		for(i=3;i>=0;i--)
		{
          buff[i]=*(a+(--count));
          *(a+count)='\0';
		}
		insert_at_first(head,atoi(buff),tail);
      //  printf("%d\n",atoi(buff));
		count = strlen(a);
	}
         
	 if(count >0)
	 {
           temp = 0;
        for(i=0;i<count;i++)
		{
			
		   temp=temp*10+(*(a+i)-'0');
                        
		}
            insert_at_first(head,temp,tail);
	 }

	 
	                                 
}

