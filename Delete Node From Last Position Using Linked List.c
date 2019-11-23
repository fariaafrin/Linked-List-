#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*newnode, *temp,*prevnode ;
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
    printf("All Nodes : ");
    while (temp !=0)
    {
        printf(" %d",temp->data);
        temp=temp->next;

    }
}


void del_last(void)
{

    temp=head;
    while (temp->next!=0)
    {
        prevnode=temp;
        temp=temp -> next;
    }
    if (temp==head)
    {
        head=0;
        printf("\nThere is no node");
    }
    else
    {
        prevnode->next=0;
        printf("\ndeleted node from last position:");
    }
    free(temp);

    display();
}

int main ()
{
    create_node();
    display();
    del_last();
    return 0;
}


