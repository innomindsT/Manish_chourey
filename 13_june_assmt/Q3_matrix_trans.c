//Write a program to do matrix transpose (2d matrix)
//Transpose of a matrix means all the ROWS will become columns and all the COLUMNS becomes ROWS

#include<stdio.h>
#define N 4

void transpose(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
	{
            B[i][j] = A[j][i];
	    }
    }
}
int main(){
	
	int i,j;
	int A[N][N] = { {1, 1, 1, 1},
                    	{2, 2, 2, 2},
                        {3, 3, 3, 3},
                        {4, 4, 4, 4} };
 
    	printf("Given matrix is \n");
    	for (i = 0; i < N; i++)
    	{
        	for (j = 0; j < N; j++){
           		printf("%d ", A[i][j]);
			}
        	printf("\n");
    	}
	int B[N][N];
 
    	transpose(A, B);
     	printf("Result matrix after transpose is \n");
    	for (i = 0; i < N; i++)
    	{
        	for (j = 0; j < N; j++){
           		printf("%d ", B[i][j]);
			}
        	printf("\n");
    	}
	return 0;
}
