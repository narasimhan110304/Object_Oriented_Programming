#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int choice;

    while(1)
    {
        printf("\nEnter choice:\n1.Insert\n2.Print\n3.Search\n4.Quit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert_end();
            break;
        case 2:
            print();
            break;
        case 3:
            search();
            break;
        case 4:
            exit(0);
        }
    };
}
void insert_end()
{
    struct node *temp,*temp1;
    int val;
    temp1=(struct node*)malloc(sizeof(struct node));
    if(temp1==NULL)
    {
        printf("Not enough memory space");
    }
    else
    {
        printf("Enter value to insert:");
        scanf("%d",&val);
        temp1->data=val;
        temp1->next=NULL;
        if(head==NULL)
        {
            head=temp1;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
            temp=temp->next;
            }

            temp->next=temp1;
        }
    }

}

void print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }

}
void search()
{
    struct node *temp;
    int val;
    temp=head;
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
