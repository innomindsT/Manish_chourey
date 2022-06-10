#include<stdio.h>

void print_array(int arr[], int);
void bubble_sort(int arr[], int);

int main(){

	int arr1[]= {5,2,8,3,1};

	printf("Our Unsorted array is\n");
	print_array(arr1, sizeof(arr1)/sizeof(arr1[0]));

	bubble_sort(arr1, sizeof(arr1)/sizeof(arr1[0]));

	printf("Sorted array using Bubblesort is\n");
	print_array(arr1, sizeof(arr1)/sizeof(arr1[0]));

	return 0;
}
void print_array(int arr1[], int n){

	for(int i=0; i<n; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
}
void bubble_sort(int arr1[], int n){
	int elementstosort;
	int leftelementpos;
	int rightelementpos;
	int swap_count=0;

	for(elementstosort=n; elementstosort>1; --elementstosort ){
		for(leftelementpos=0; leftelementpos < (elementstosort -1); ++leftelementpos){
			rightelementpos = leftelementpos +1;

			if(arr1[leftelementpos] > arr1[rightelementpos]){
			int t;
			t = arr1[leftelementpos];
			arr1[leftelementpos] = arr1[rightelementpos];
			arr1[rightelementpos] = t;
			swap_count++;
			}
		}	
	}	
	printf("Bubblesort did %d swaps to make array sorted\n",swap_count);
}
