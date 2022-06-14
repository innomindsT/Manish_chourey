// C program to reverse a string

#include<stdio.h>
#include<string.h>

int main(){

	char str1[50],temp;
	int i=0, j=0;

	printf("Please enter any string here: ");
	scanf("%[^\n]s",str1);

	j = strlen(str1) - 1;

	while(i<j)
	{
		temp = str1[i];
		str1[i] = str1[j];
		str1[j] = temp;

	  i++;
	  j--;
	}
	printf("The reverse of the guiven string is: %s\n",str1);

return 0;
}
