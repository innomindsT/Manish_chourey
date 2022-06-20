//Implement stack in C

#include<stdio.h>
//declaring some global variables
int stack[10], choice,n,top,x,i;

void push();
void pop();
void display();

int main(){

	top = -1;//initially there is no element in stack i.e -1 used here
	printf("please enter the size of stack\n");
	scanf("%d",&n);
	
	do{
		printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT\n");
		printf("\nPlease enter your choice here : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				push();
				break;
				}
			case 2:
			{
				pop();
				break;
				}
			case 3:
			{
				display();
				break;
				}
			case 4:
			{
				break;
				}
			default:
			{
				printf("\ninvalid choice\n");
				}
		}
	}
	while(choice != 4);
	return 0;
}

void push(){
	if(top >= n-1)
	{
		printf("\n STACK overflow cant add more\n");
		}
	else
	{
		printf("enter a value to be pushed : ");
		scanf("%d",&x);
		top++;
		stack[top] = x;
		}
}

void pop(){
	if( top <= -1 )
	{
		printf("\nSTACK is Underflow or empty STACK");
		}
	else{
		printf("\nPOPPED element is %d", stack[top]);
		top--;
		}
}
	
void display(){
	if(top >= 0)
		{
			printf("\n Elements in STACK \n");
			for( i=top ;i >=0 ; i--)
				printf("%d\t",stack[i]);
				}
	else{
		printf("\nEMPTY STACK\n");
		}
}
