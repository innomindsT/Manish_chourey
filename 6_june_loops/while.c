//program based on while loop

#include<stdio.h>

int main(){

	int n,numbers,i=0,sum=0;
	float average;
	
	printf("\nplease enter how many numbers you want to get sum or get average: ");
	scanf("%d",&n);

	printf("\nplease enter numbers here one by one\n");

	while(i<n){
		scanf("%d",&numbers);
		sum = sum + numbers;
		i++;
		}
	
	average = sum/n;
		
		printf("\nsum of the %d numbers is: %d",n,sum);
		printf("\naverage of the %d numbers is : %.2f\n",n,average);

return 0;
}
