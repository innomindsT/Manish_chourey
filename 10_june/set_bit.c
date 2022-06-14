//  c program to set any desired bit in a given integer SET bit means changing 0 ->> 1 or  1 -->> 1
// example - 5 is 101 so when 1st bit is set for this integer it becomes 111 i.e 7 in decimal representation

#include<stdio.h>

int main(){
	
	int num,n,new_num;

	printf("Enter any positive number here: ");
	scanf("%d",&num);

	printf("please enter bit position which you want to set (0-31) : ");
	scanf("%d",&n);

	new_num = ( 1 << n) | num;

	printf("New number after setting %d bit is %d (in decimal)\n",n,new_num);


return 0;
}
