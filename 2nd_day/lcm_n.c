/* C program to calculate lcm and gcd of n numbers*/

#include<stdio.h>
int find_gcd(int, int);

int main(){

	int array[]={10, 20, 40, 100, 120} ;
	int lcm = array[0];
	int gcd = array[0];
	
	printf("elements present in array is:");
	for(int k=0 ; k<5; k++)
		printf(" %d ",array[k]);
	
	printf("\n");
	//for loop used to find gcd in array
	for( int i=1; i<5; i++ ){
		gcd = find_gcd(array[i], lcm);
		lcm = (lcm * array[i]/gcd);
	}
	printf("LCM of given elements is %d\n",lcm);
	//printf("GCD is %d\n",gcd);	
}

int find_gcd(int a, int b)
{
	if(b==0){
	   return a;
	}
	
	return find_gcd(b, a%b);

}
