#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL, *rear=NULL;

void enqueue(int x)
{
    struct node *newnode;
    newnode =(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void display()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("Queue is EMPTY\n");
    }
    else
    {
        temp=front;
        printf("Displayed :-  \n");
        while(temp!=0)
        {
            printf("\n%d\n", temp->data);
            temp=temp->next;
        }

    }


}

void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==0 && rear==0)
    {
        printf("Queue is EMPTY\n");
    }

    else
    {
        printf("\nDequeued number is %d\n\n", front->data);
        front=front->next;
        free(temp);

    }
}
void peek()
{


    if(front==0 && rear==0)
    {
        printf("Queue is EMPTY\n");
    }
    else
    {


        printf("\nPeeked number is  %d\n\n",front->data);
    }



}
int main()
{
    /// if you don't call any enqueue() function then it will print "Queue is EMPTY" .
    enqueue(34);
    enqueue(44);
    enqueue(24);

    display();
    dequeue();

    display();
    dequeue();

    peek();
    display();
    return 0;
}
