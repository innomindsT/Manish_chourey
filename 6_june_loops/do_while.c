// C program based on do-while loop

#include<stdio.h>  

int main(){    
   
    int i=1;
    int number=0;

    printf("Enter a number: ");    
    scanf("%d",&number);    
    
    do{    
    printf("%d \n",(number*i));    
    i++;    
    }while(i<=10);    
    
    return 0;  
}    
