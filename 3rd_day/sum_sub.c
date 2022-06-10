#include<stdio.h>

int main(void){

	unsigned short int a = 10;
	unsigned short int b = 15;
	unsigned short int c,d;
	
	c = a+b;
	d = b-a;
	
	printf("Given numbers are %hu and %hu\n",a,b);

	printf("Addition of both numbers is %hu\n",c);
	
	printf("Substraction of both numbers is %hu\n",d);


return 0;
}
