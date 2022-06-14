// C program to flip bits of a given integer
// example 55 (0011 0111) -->> 59 (0011 1011)

#include<stdio.h>

unsigned int flip_bits(unsigned int x){
	
	unsigned int odd_bits = x & 0x55555555 ;  //0101 0101 0101 0101 0101 0101 0101 0101 

	unsigned int even_bits = x & 0xAAAAAAAA ; //1010 1010 1010 1010 1010 1010 1010 1010 

	even_bits = even_bits >> 1;
	odd_bits = odd_bits << 1;

return (odd_bits | even_bits);
}

int main(void){

	unsigned int x;
//	int num,flip;
	
	printf("Please enter any positive integer to swap its bits: ");
	scanf("%u",&x);
	
	printf("number after fliping its bits is : %d\n", flip_bits(x));
		
	//printf("Please enter any positive integer to swap its bits: ");
	//scanf("%d",&num);
	
	//flip = ~num;
	//printf("number after fliping its bits is : %d\n", flip);

return 0;
}
