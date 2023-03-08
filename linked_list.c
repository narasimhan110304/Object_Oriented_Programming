#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    int choice;
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    while(1)
    {
        printf("\nEnter choice:\n1.Insert\n2.Print\n3.Search\n4.Quit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert_end(head);
            break;
        case 2:
            print(head);
            break;
        case 3:
            search(head);
            break;
        case 4:
            exit(0);
        }
    };
}
void insert_end(struct node *head)
{
    struct node *temp,*temp1;
    int val;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp1=(struct node*)malloc(sizeof(struct node));
    if(temp1==NULL)
    {
        printf("Memory space not available");
    }
    else
    {
        temp->next=temp1;
        printf("Enter value to insert:");
        scanf("%d",&val);
        temp1->data=val;
        temp1->next=NULL;
    }
}

void print(struct node *head)
{
    struct node *temp;
    temp=head->next;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void search(struct node *head)
{
    struct node *temp;
    int val;
    temp=head->next;
    printf("Enter the value to search:");
    scanf("%d",&val);
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            printf("Element present in list");
            break;
        }
        if(temp->next==NULL)
            printf("Element not present in the list");
        temp=temp->next;
    };
}
