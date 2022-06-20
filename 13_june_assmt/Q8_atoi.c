//Write a function to convert string to integer, equivalent of atoi().
//int my_atoi(char *str);

#include<stdio.h>

int my_atoi(char*str){

	int num = 0;
  
    	for (int i = 0; str[i] != '\0'; ++i) 
  	{
          num = num * 10 + (str[i] - '0'); 
	}
	return num;
}

int main(){

char str[] = "89789"; 

    printf("given string is:%s\n",str);   
    		 
    //my_atoi(str);

    printf(" converted string to integer is %d\n",my_atoi(str));


return 0;
}
