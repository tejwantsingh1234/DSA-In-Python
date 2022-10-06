#include <stdio.h>
struct node
{
    int data;
    struct node *next,*head;
} 

void display()
{
    struct node *temp;
    if (head==0)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        while(temp->next != head)
        {
            printf("%d",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
    }
}
