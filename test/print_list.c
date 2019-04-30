#include "main.h"

void print_list(dlist *head)
{       
        int temp;
	if(head == NULL)
	{
		printf("List empty\n");
	}
	else
	{
		while(head)
		{   
                   temp = head->data;
                        printf("%d",temp/1000);
                        temp = temp % 1000;
                        printf("%d",temp/100);
                        temp = temp % 100;
                        printf("%d",temp/10);
                        printf("%d",temp%10);
                        printf("-->");
			head = head -> next;
		}
		putchar('\n');
	}
	putchar('\n');
}

