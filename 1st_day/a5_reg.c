// C program for register storage class

#include<stdio.h>

int main(){

register int r=30;
int b=10;

printf("The value of variable r stored in register storage class is %d\n",r);

//printf("The address for register variable a is %lu",&r);// when we try to print address it will give compilation error here due to using register 
//storage class along with int r 

printf("The address for variable b is %lu\n",&b);//140725685792452 this is the address for variable b

return 0;
}
