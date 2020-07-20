#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push (int x)
{

    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}

void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("stack empty");
    }

    else
    {
        printf("stack elements are:  \n");
        while(temp!=0)
        {

            printf("%d\n",temp->data);
            temp=temp->next;
        }

    }


}

void peek()
{
    if(top==0)
    {
        printf("stack empty");
    }

    else
    {

        printf("\ntop element is %d\n\n",top->data);
    }
}


void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("stack empty");
    }

    else
    {

        printf("popped data is%d\n\n",top->data);
        top=top->next;
        free(temp);
    }
}

int main()
{
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    push(16);
    push(17);
    push(18);
    display();
    peek();
    pop();
    display();

    peek();
    pop();
    display();
}




