/* C program to calculate frequency of a character in given string */

#include<stdio.h>
#include <string.h>
#include<stdio_ext.h>
 
int main()
{
    char s[50];
    char c;  
    int i;
    int count=0;
 
    printf("Enter  the string : ");
    scanf("%[^\n]s",s);// using scanset here instead of using %s if we use only %s here then string wont be calculated after space

    printf("Enter character to be searched: ");
    
    //to use fpurge here header stdio_ext.h is required
    __fpurge(stdin);//The  function fpurge() clears the buffers of the given stream. we can also use fflush for same purpose
    scanf("%c",&c);
    
    //here for conditional checking we can also use NULL('\0') character with s[i]
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
          count++;
	}
    }
      printf("character '%c' occurs %d times \n ",c,count);
      
    return 0;
}
