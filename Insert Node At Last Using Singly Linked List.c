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
    printf("all nodes:");
    while (temp !=0)
    {
        printf(" %d",temp->data);
        temp=temp->next;

    }
}


void insert_last(void)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter new node for last position:- " );
    scanf(" %d", &newnode -> data );
    newnode -> next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    display();
}

int main ()
{
    create_node();
    display();
    insert_last();
    return 0;
}


