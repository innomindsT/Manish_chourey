#include <stdio.h>

int main()
{
    
    int n1,n2,n3;            //Array Size Declaration
    printf("\nEnter the size of first array: ");
    scanf("%d",&n1);
    printf("\nEnter the size of second array: ");
    scanf("%d",&n2);
    
    n3=n1+n2;
    printf("\nEnter the array1 elements: \n");
    int a[n1],b[n2],c[n3];     //Array Declaration
    for(int i=0;i<n1;i++)      //Array Initialized
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }

    int k=n1;//starting this numbering from end of 1st array like if 1st array is of size 3 then elements stored at 1st array is a[0] a[1] a[2] 
    	    // so we should start array 2 from 3 like b[3] b[4] b[5] ......

    printf("\nEnter the array2 elements: \n");
    for(int i=0;i<n2;i++)      //Array Initialized
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    printf("\nThe merged array..\n");
    for(int i=0;i<n3;i++)
    printf("%d ",c[i]);        //Print the merged array
    
    printf("\n");
    return 0;   
}
