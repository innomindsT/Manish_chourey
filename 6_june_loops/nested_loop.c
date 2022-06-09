#include<stdio.h>

int main(){

	int i,j,k;
	printf("enter number of lines to be printed for pyramid: ");	
	scanf("%d",&k);

	for( i=1; i<=k; i++){
		for( j=k; j>=1; j--)
		{
			if(j<=i)
			printf("%d",i);
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
