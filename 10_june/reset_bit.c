//  c program to reset any desired bit in a given integer RESET bit means changing 1 ->> 0  or  0 -->> 0
// example - 5 is 101 so when 0th bit is set for this integer it becomes 100 i.e 4 in decimal representation

#include<stdio.h>

int main(){
	
	int num,n,new_num;

	printf("Enter any positive number here: ");
	scanf("%d",&num);

	printf("please enter bit position which you want to set (0-31) : ");
	scanf("%d",&n);

	new_num = num & (~( 1 << n));

	printf("New number after setting %d bit is %d (in decimal)\n",n,new_num);


return 0;
}
