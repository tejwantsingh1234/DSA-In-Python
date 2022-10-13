#include <stdio.h>
struct node
{
    int data;
    struct node *next;
} *tail;

void insertatbeg()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);

    if(tail==0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
    }
}

void insertatend()
{
     struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);

    if(tail==0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

void insertatspec()
{
    struct node *newnode,*temp;
    int pos,i=1,l;
    printf("Enter pos: ");
    scanf("%d",&pos);
    
    l = getlength();
    if(pos<0 || pos>l)
    {
        printf("Invalid position");
    }
    else
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        
        temp = tail->next;
        while(i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
