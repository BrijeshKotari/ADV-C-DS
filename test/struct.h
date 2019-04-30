#ifndef STRUCT_H
#define STRUCT_H

typedef int data_t;
typedef struct node
{
	data_t data;
	struct node * next;
	struct node *prev;
}dlist;


typedef enum
{
	success,
	failure,
	list_empty,
	data_found,
	data_not_found,
        GREATER,
        LESSER,
        EQUAL
        
}Status;

Status compare(dlist **head1,dlist **tail1,dlist **head2,dlist **tail2,int len1,int len2);

void createlink(char *a,dlist **head,dlist **tail);

Status addition(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headR, dlist **tailR, int len1, int len2);

Status substraction(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headR, dlist **tailR, int len1, int len2,int *flag);

Status maddition(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, int len1, int len2);

Status multiply(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headR, dlist **tailR, int len1, int len2);

Status dsubstraction(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, int len1, int len2);

int division(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, int len1, int len2);


int findlen(dlist **head,dlist **tail);


/*Insert element at last */
Status insert_at_last(dlist **head, data_t data,dlist **tail);

/*Insert element at first */
Status insert_at_first(dlist **head, data_t data,dlist **tail);

/*Insert element after a given node */
Status delete_at_first(dlist **head);

/*Insert element before a given node */
Status delete_at_last(dlist **tail);

/*Insert at nth node*/
Status delete_all(dlist **head,dlist **tail);

/*Delete a node */
Status search_node(dlist ** head, data_t data);

/*Print all the elements */
void print_list(dlist *head);
#endif
