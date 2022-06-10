//C program to find whether number is prime or not
//prime number is a number which is only divisible by itself or one not by anything else

#include<stdio.h>

int prime_check(int);

int main(){

	int n, result;

	printf("Enter any number to check wether it is prime or not\n");
	scanf("%d",&n);
	
	result= prime_check(n);

	if(result ==1)
	{
		printf("Given number is prime number\n");
	}
	else{
		printf("Given number is not a prime number\n");
	}

return 0;
}
int prime_check(int a){

	int p;

		for( p=2 ; p<=a-1 ; p++)
		{
		   if( a%p ==0)
		   {
			   return 0;
		   }
		 }
	return 1;
}
