// C program to reverse bits of a integer given by user
// example : let number is 11 (1011) so desired output will be (1101) i.e 13 in decimal

#include<stdio.h>

unsigned int reverse_bit(unsigned int x){

	unsigned int rev=0;
	while( x > 0){
		rev = rev << 1;
		
		//if current bit is '1'
		if (x & 1 ==1)
			rev = rev ^ 1;

		//bitwise right shift 'x' by 1	
		x = x>>1;
		}

	return rev;
}

int main()
{
	unsigned int x;
	printf("\tPlease enter a positive number for whom you want to reverse the bits : ");
	scanf("%u",&x);
	
	printf("\tThe number after reversing its bits is %u \n", reverse_bit(x));

return 0;
}
