#include <stdio.h>
int queue[20];
int front=-1,rear=-1,max;
void enqueue()
{
    if(rear==max-1)
        printf("Queue overflow");
    else
    {
        if(front==-1)
        {
            front=0;
            printf("Enter element : ");
            rear=rear+1;
            scanf("%d",&queue[rear]);
        }
        else
        {
            printf("Enter element : ");
            rear=rear+1;
            scanf("%d",&queue[rear]);
        }
    }
}
void dequeue()
{
    if(front==-1 || front>rear)
        printf("Queue underflow");
    else
    {
        printf("Deleted element %d\n",queue[front]);
        front=front+1;
    }
}
void display()
{
    int i=front;
    if(front==-1)
        printf("Queue underflow");
    else
    {
        printf("Queue is : \n");
        while(i<=rear)
        {
            printf("%d\n",queue[i]);
            i=i+1;
        }
    }
}
int main()
{
    int choice,run=1;
    printf("____Queue____");
    printf("\nEnter the size of the queue : ");
    scanf("%d",&max);
    while(run==1)
    {
        printf("\nOPTIONS\n1.Enqueue\n2.Dequeue\n3.Display\n4.Stop\n");
        printf("Enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : enqueue();
                    break;
            case 2 : dequeue();
                    break;
            case 3 : display();
                    break;
            case 4 : run=0;
                    break;
            default : printf("Valid Input !!!");
                     break;
        }
    }
    return 0;
}