#include<stdio.h>
#include<stdlib.h>

int cq[],size,item;
int front = -1;
int rear = -1;
void insert();
void deletion();
void display();

int main()
{
    int n;
    printf("+++CIRCULAR QUEUE+++");
    printf("\n\nEnter size of circular queue : ");
    scanf("%d",&size);
   
    do
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1 :
                    insert();
                    break;
            case 2 :
                    deletion();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    break;
            default:
                    printf("Wrong choice");
        }
    }while(n!=4);
return 0;
}

void insert()
{
    if((front == 0 && rear == size-1) || (front == rear+1))
    {
        printf("\nQueue Overflow ");
        return;
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
        printf("Enter the element : ");
        scanf("%d", &item);
    }
    else
    {
        if(rear == size-1)
        {
            rear = 0;
            printf("Enter the element : ");
            scanf("%d", &item);
        }
        else
        {
            rear = rear+1;
            printf("Enter the element : ");
            scanf("%d", &item);
        }
    }
    cq[rear] = item ;
}

void deletion()
{
if(front == -1)
{
    printf("Queue Underflown");
    return ;
}
printf("Element deleted from queue is : %d",cq[front]);
if(front == rear)
{
    front = -1;
    rear=-1;
}
else
{
    if(front == size-1)
        front = 0;
    else
        front = front+1;
}
}

void display()
{
    int i = front,j = rear;
    if(front == -1)
    {    
       printf("Queue is empty");
       return;
    }
    printf("\nElements :");
    if( i <= j )
        while(i <= j)
        {
            printf("%d ",cq[i]);
            i++;
        }
    else
        {
            while(i<= size-1)
            {
                printf("%d ",cq[i]);
                i++;
            }
            i = 0;
            while(i <= j)
            {
                printf("%d ",cq[i]);
                i++;
            }
        }
}


