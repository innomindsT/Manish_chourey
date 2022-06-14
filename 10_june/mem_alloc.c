#include<stdio.h>

int main()
{
	int num;
	
	printf("==========================================================\n");
	printf("enter number of element for array: \n");
	printf("==========================================================\n");
	scanf("%d",&num);

	int arr1[num];
	printf("==========================================================\n");
	printf("enter array elements here\n");
	printf("==========================================================\n");
 
 	for( int i=0; i<num; ++i){
		scanf("%d",&arr1[i]);
	}
		
	printf("Given array is:\n");
	for( int i=0; i<num; ++i){
		printf("%d\t",arr1[i]);
	}

	printf("\nSize of integer array is: %ld bytes\n", sizeof(arr1));

return 0;
}
