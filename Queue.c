#include<stdio.h>
#include<stdlib.h>
int q[20],size,n,rear=-1,front=-1,item;
void insert();
void delete();
void peek();
void traverse();

main()
{
	printf("**** QUEUE IMPLEMENTATION ****");
	printf("\n\n Enter the size of queue : ");
	scanf("%d",&size);
	 
	do
	{
		printf("\n\n1. insert \n2. delete \n3. Peek \n4. Traverse \n5. Exit \nEnter a choice : ");
		scanf("%d",&n);
		switch(n)
		{
		case 1:
			  insert();
			  break;
		case 2:
			  delete();
			  break;
		case 3:
			  peek();
			  break;
		case 4:
			  traverse();
			  break;
		case 5:
			  break;
		default:
			   printf("+++INVALID+++");
		}
	 }while(n!=5);
	 
	return 0;
}

//PUSH
void insert()
{
	if(rear==size-1)
	{
	    printf("\n\n+++Queue Overflow+++");
	}
	else
	{
	   if(front==-1)
	   {
	   	front=0;
	   }
	   printf("\n\n Enter the element : ");
	   scanf("%d",&item);
	   rear=rear+1;
	   q[rear]=item;
    }
}

//POP
void delete()
{
	if(front==-1||front>rear)
	{
		printf("\n\n+++Queue Underflow+++");
	}
	else
	{
		printf("\n\n Deleted element is : %d",q[front]);
		front=front+1;
	}
}

//PEEK
void peek()
{
	if(front==-1||front>rear)
		printf("\n\n NO ELEMENT");
	else
	    printf("\n\nPeek Element is : %d",q[front]);
	
}

//TRAVERSE
void traverse()
{
	int i;
	if(front==-1||front>rear)
	{
		printf("\n\n++QUEUE EMPTY++");
	}
	else
	{
	    printf("\n\nQUEUE : ");
	    for(i=front;i<=rear;i++)
        {
	        printf("%d\t",q[i]);
        }
	}   
}
