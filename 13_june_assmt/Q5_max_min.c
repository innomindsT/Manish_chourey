//Find max/min in a given array

#include<stdio.h>

// Find maximum between two numbers.
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}
 
// Find minimum between two numbers.
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}

int get_mini(int arr[],int n){
	int res = arr[0];
	
	for(int i=0 ; i< n ; ++i)
		res = min(res , arr[i]);

	return res;
}
int get_max(int arr[], int n){
	
	int res = arr[0];
	
	for(int i=0 ; i< n ; ++i)
		res = max(res , arr[i]);

	return res;
}
int main(){
	
	int size;
	printf("Enter size of array here: ");
	scanf("%d",&size);

	int arr[size];
	printf("enter array elements here one by one\n");
	for(int i=0; i<size; ++i)
		scanf("%d",&arr[i]);
	
	printf("Given array elements are\n");
	for(int j=0; j<size; ++j)
		printf("%d ",arr[j]);
	printf("\n");

	printf("Minimum element of array is %d\n",get_mini(arr,size));
	
	printf("Maximum element of array is %d\n",get_max(arr,size));	

	return 0;
}
