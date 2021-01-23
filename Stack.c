#include<stdio.h>
#include<stdlib.h>
int size,s[20],top=-1;
void push();
void pop();
void peek();
void traverse();

int main()
{
	int n;
 
    printf("++++STACK IMPLEMENTATION++++");
	printf("\n\n Enter size of stack : ");
	scanf("%d",&size);
	
	do
	{
	printf("\n1. Push \n2. Pop \n3. Peek \n4. Traverse \n5. Exit \nEnter a choice : ");
    scanf("%d",&n); 
    switch(n)
    {
    case 1:
	      push(); //fn call
	      break;
    case 2:
	      pop();  
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
	      printf("\n\n INVALID");
	      break;
}}
while(n!=5);
  
return 0;
}

//PUSH  
void push()
{
int item;
if(top==size-1)
 {
  printf("\n\n ***Stack Overflow***");
 }
  else
  {
   top=top+1;
   printf("\n Enter the element : ");
   scanf("%d",&item);
   s[top]=item;
  // printf("%d",s[top]);
  }
}

//POP
void pop()
{
if(top<0)
 {
  printf("\n\n ***Stack Underflow***");
 }
 else
 {
  printf("\nDeleted the element : %d",s[top]);
  top=top-1;	
 }
}

//PEEK
void peek()
{
	if(top==-1)
	printf("\n\n***No Element***");
	else
	printf("Top element is : %d",s[top]);
}

//TRAVERSE
void traverse()
{
	int i;
	if(top==-1)
	{
		printf("\n***Stack Empty***");
	}
	else
	{
	printf("\n\nSTACK : ");
	for(i=0;i<=top;i++)
    {
	printf("%d\t",s[i]);
    }
	}   	
}
