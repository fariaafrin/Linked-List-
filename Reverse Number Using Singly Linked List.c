#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*newnode, *temp ;

int i,n ;
void create_node(void)
{

    for (i=1; i <=5; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter node %d:- ", i);
        scanf(" %d", &newnode -> data );
        newnode -> next= NULL;

        if (head==0)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp -> next = newnode;
            temp= newnode;

        }
    }
}


void display(void)
{
    temp= head;

    while (temp !=0)
    {
        printf(" %d",temp->data);
        temp=temp->next;

    }

}




void reverse(void)
{

    struct node *prevnode=NULL,*nextnode, *currentnode ;
    currentnode=nextnode=head ;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode ;
        currentnode=nextnode;
    }
    head=prevnode;


    display();
}



int main ()
{
    create_node();
    printf("Traverse All Nodes:");
    display();
    printf("\nReversed Linked List :  ");
    reverse();

    return 0;
}


