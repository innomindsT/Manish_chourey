// C program to merge two array using pointer

#include<stdio.h>
//function used to merge two arrays using pointer 
void merge(int *a,int *b,int *c,int n1,int n2)
{       
    for(int i=0; i<n1+n2; i++)
    {
         if(i<n1)
          	c[i]=a[i];
          else
            	c[i]=b[i - n1];
	}
}
//function to print array elements
void print(int *a,int n)
 { 
    for(int i=0; i<n; i++)
    {
      	printf("%d  ",a[i]);
     }
  }
  
int main()
{
    int a[20],b[20],c[30];
    int i,n1,n2,n ;
    /////////
    printf("Enter size of the 1st array : ");
    scanf("%d", &n1);
    printf("Enter elements in array : ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }
    //////////
    printf("Enter size of the 2nd array : ");
    scanf("%d",&n2);
 
    printf("Enter elements in array : ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }
    //////////
    merge(a,b,c,n1,n2);
     
    printf("1st array is :\n");
    	print(a,n1);
                     
    printf("\n2nd array is :\n");
 	print(b,n2);
            
    printf("\nMerged array is :\n");
      	print(c,n1+n2);

    printf("\n");
    
    return 0;
}
