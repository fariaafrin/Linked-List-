#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*newnode, *temp ;
int i,n ;
int posi,j=1,count=5;

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
void delete_any_position(void)
{
    struct node *nextnode;
    temp=head;
    printf("\nenter delete position : ");
    scanf("%d",&posi);
    if(posi>=6)
    {
        printf("Invalid Position. That's why can not delete\n");
    }

    else if(posi==1)
    {
        temp=head;
        head=temp->next;
        free(temp);
        display();

    }
    else
    {
        while(j<posi-1)
        {
            temp=temp->next;
            j++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);

        display();

    }
}
int main ()
{
    create_node();
    display();
    delete_any_position();
    return 0;
}

