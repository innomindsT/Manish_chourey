#include<stdio.h>

int main(){
	
	//char s[]="innominds hyderabad";
	char s[100];
	int i;

	scanf("%[^\n]s",s);// using scanset for reading string after space also otherwise using %s will only give length till space

	for( i=0; s[i] != '\0' ; i++);

	printf("The length of given string is %d\n",i);

	return 0;
}
