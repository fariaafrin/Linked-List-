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

void insert_after_position(void)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nafter which position you want to insert data: ");
    scanf("%d",&posi);
    if(posi>count)
    {
        printf("invalid position\n");

    }

    else
    {
        temp=head;
        while(j<posi)
        {
            temp=temp->next;
            j++;
        }
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
    display();

}
int main ()
{
    create_node();
    display();
    insert_after_position();

    return 0;
}





