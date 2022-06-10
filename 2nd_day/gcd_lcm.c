#include<stdio.h>

int main()
{

	int gcd,lcm,numerator,denominator,rem;
	int num1,num2;
	printf("please enter two positive numbers\n");
        scanf("%d",&num1);
	scanf("%d",&num2);

	if(num1>num2){
		numerator = num1;
		denominator = num2;
	}
	else{
		numerator = num2;
		denominator = num1;
	}
	
	rem = numerator % denominator;

	while(rem != 0){
		numerator = denominator;
		denominator = rem;

		rem = numerator % denominator;//main step
	       }
	
		gcd = denominator;
		lcm = num1 * num2 / gcd;

	printf("GCD of %d and %d is %d\n",num1,num2,gcd);
	printf("LCM of %d and %d is %d\n",num1,num2,lcm);

return 0;
}
