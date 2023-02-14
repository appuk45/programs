#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;  
};
struct node *head;

void begin_insert()
{
    struct node *ptr;
    int item;
    ptr=(struct node *) malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("OVERFLOW!!!");
    else
    {
        printf("Enter the element : ");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("Node inserted...");
    }
}
void last_insert()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *) malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("OVERFLOW!!!");
    else
    {
        printf("Enter the element : ");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=ptr;
            ptr->next=NULL;
        }
        printf("Node inserted...");
    }
}                               
void random_insert()
{
    int loc,i,item;
    struct node *ptr,*temp;
    ptr=(struct node *) malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("OVERFLOW!!!");
    else
    {
        printf("Enter the location after which the node is to be insert : ");
        scanf("%d",&loc);
        printf("Enter the element : ");
        scanf("%d",&item);
        ptr->data=item;
        temp=head;
        for(i=1;i<loc;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("Cannot insert element...");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("Node inserted...");
    }
}
void begin_dlt()
{
    struct node *ptr;
    if(head==NULL)
        printf("Linked list is empty...");
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("Node deleted...");
    }
}
void last_dlt()
{
    struct node *ptr,*ptr1;
    if(head==NULL)
        printf("Linked list is empty...");
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("The only node in the list is deleted...");
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        free(ptr);
        printf("Node deleted...");
    }
}
void random_dlt()
{
    struct node *ptr,*ptr1;
    int loc,i;
    printf("Enter the location after which the node is to be deleted : ");
    scanf("%d",&loc);
    ptr=head;
    for(i=0;i<loc;i++)
    {
        ptr1=ptr;
        ptr=ptr->next;
        if(ptr==NULL)
        {
            printf("cannot delete element...");
            return;
        }
    }
    ptr1->next=ptr->next;
    free(ptr);
    printf("Deleted element from location %d",loc+1);
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
        printf("Nothing to print...");
    else
    {
        printf("Printing linked list...");
        while(ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr=ptr->next;
        }
    }
}
void search()
{
    struct node *ptr;
    int i=0,item,flag=0;
    if(head==NULL)
        printf("Linked list is empty...");
    else
    {
        ptr=head;
        printf("Enter the element to be searched : ");
        scanf("%d",&item);
        while(ptr!=NULL)
        {
            if(ptr->data==item)
            {
                printf("Item was found at location %d",i+1);
                return;
            }
            else
                flag=1;
            i++;
            ptr=ptr->next;
        }
        if(flag==1)
            printf("Item not found");
    }
}

int main()
{
    int ch=0;
    printf("____LINKED LIST____");
    while(ch!=9)
    {
        printf("\n___Main Menu___");
        printf("\n1.Insert to beginning\n2.Insert to the last\n3.Insert to a given position\n4.Delete from the beginning\n5.Delete from the last\n6.Delete from given poistion\n7.Display\n8.Search an element\n9.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : begin_insert();
                    break;
            case 2 : last_insert();
                    break;
            case 3 : random_insert();
                    break;
            case 4 : begin_dlt();
                    break;
            case 5 : last_dlt();
                    break;
            case 6 : random_dlt();
                    break;
            case 7 : display();
                    break;
            case 8 : search();
                    break;
            case 9 : break;
            default : printf("Invalid choice!!!");
                    break;
        }
    }
    return 0;
}