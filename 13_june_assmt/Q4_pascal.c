//Print Pascal triangle

#include<stdio.h>

int main(){
int line, cal = 1, blank, i, j;
 
    printf("Enter number of lines: ");
    scanf("%d",&line);
 
    for(i=0; i<line; i++)      
    {
        for(blank=1; blank <= line-i; blank++)  // space for every line starting
            printf("  ");
 
        for(j=0; j <= i; j++)  
        {
            if (j==0 || i==0)  
                cal = 1;
            else
                cal = cal*(i-j+1)/j;
 
            printf("%4d", cal);
        }
        printf("\n");
    }

return 0;
}
