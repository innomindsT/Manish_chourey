#include<stdio.h>

void main()
{
	auto int x;
	static int y=5;

	auto int sum;

	x=10;
	sum=x+y;

	printf("sum of two numbers x and y is %d\n",sum);

	x=100; y=200;

	sum=y+x;

	printf("sum of two numbers x and y after reinitialization is %d\n", sum);


}
