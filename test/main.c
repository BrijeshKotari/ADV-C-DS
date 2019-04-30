#include "main.h"

int main(int argc,char *argv[])
{       
    char *var=argv[1];
    int count;
    char a[100];
    char b[100];
    char buff[4];
    char ch;
    int i=0,j=0;
    int len1,len2,flag=0;
    dlist *head1=NULL,*tail1=NULL;
     dlist *head2=NULL,*tail2=NULL;
     dlist *headR=NULL,*tailR=NULL;

     while(*var)
	 {
	    
	    
	    if(*var>='0' && *var<='9' && flag==0)
		 {
		 	
            a[i++]=*var;
            var++;
		 }
		 else if(*var>='0' && *var<='9' && flag)
		 {
		 	 b[j++]=*var;
		 	 var++;
		 }
		 else
		 {
		 	 flag=1;
		 	 ch=*var;
		 	 var++;
		 }  

	 }
	 a[i]='\0';
	 b[j]='\0';


      len1=strlen(a);
      len2=strlen(b);
/* 	printf("%s\n",a);
     printf("%c\n",ch);
     printf("%s\n",b);    */
     createlink(a,&head1,&tail1);  
    print_list(head1);
   createlink(b,&head2,&tail2);
    print_list(head2);
//    printf("%d %d\n",len1,len2);
    
                flag = 0;
                switch (ch)
		{
			case '+':
				// call the function to perform the addition operation 
				if (addition(&head1, &tail1, &head2, &tail2, &headR,&tailR, len1, len2) == success)
				{
					printf ("Addition completed\n");
					print_list(headR);
				}
				break;
			case '-':	
				// call the function to perform the subtraction operation
		        	if (substraction(&head1, &tail1, &head2, &tail2, &headR,&tailR, len1, len2,&flag) == success)
				{
					printf ("Substraction completed\n");
                                        if(flag)
                                        printf("negetive-");
					print_list(headR);
				}   
                               
				break;
			case '*':	
				// call the function to perform the multiplication operation 
                                if (multiply(&head1, &tail1, &head2, &tail2, &headR,&tailR, len1, len2) == success)
				{
					printf ("multiplication completed\n");
					print_list(headR);
				}
				break;
			case '/':
	                         count=division(&head1, &tail1, &head2, &tail2, len1, len2); 
				
					printf ("division completed\n");
					printf("d = %d\n",count);
                                 //       print_list(head1);
				
				// call the function to perform the division operation     
				break;
			default:
				printf("Invalid Input:-( Try again...\n");
		}   

 
}
