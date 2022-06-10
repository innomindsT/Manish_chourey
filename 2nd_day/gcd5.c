// find GCd of 5 numbers

#include<stdio.h>

int main (void)
{
	int array[5];
	int i,gcd;
	printf("Enter 5 numbers:- ");
	for(i=0 ; i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	
	gcd = array[0];
	int j =1;
	while(j < 5)
	{
		if(array[j] %gcd ==0 )
		{
			j++;
		}
		else
		{
			gcd = array[j] %gcd;
			i++;
		}
	}
	printf("GCD of given numbers is = %d\n",gcd);
	return 0;
}
