
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int top = -1 , stack[SIZE];
void push(int ele)
{
	stack [++top] = ele;
}
int pop()
{
	return(stack[top--]);
}
int peek()
{
	return(stack[top]);
}
void display()
{
	for (int i = top ; i>=0; i--)
		printf("%d\n",stack[i]);
}
int main()
{
	int ch;int ele;
	while(1)
	{
		printf("\n 1-push \n 2-pop \n 3-peek \n 4-display \n 5-exit");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:if(top == SIZE-1)
				       printf("stack overflow");
			       else
				   {
					   printf("enter the element to be inserted");
					   scanf("%d",&ele);
					   push(ele);
				   }
			       break ;
		       case 2: if(top == -1)
				       printf("stack underflow");
			       else
				       printf("deleted element is %d",pop());
			       break;
		      case 3:if(top == -1)
				     printf("stack underflow");
			     else
				     printf("top element is %d",peek());
			     break;
		     case 4:if(top == -1)
				    printf("stack underflow");
			    else
				    display();
			    break;
		     case 5: exit(0);
	        }
       	}
}


#output:

1-push 
 2-pop 
 3-peek 
 4-display 
 5-exitenter your choice 2
 2
stack underflow

