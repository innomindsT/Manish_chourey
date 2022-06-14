//the right most byte is called least significant byte and 
//the left most byte is called most significant byte.

/* In big endian format the most significant byte is stored first, 
thus gets stored at the smallest address byte, while in little 
endian format the least significant byte is stored first.  */

#include <stdio.h>

int main ()
{
  unsigned int x = 0x76543210;
  char *c = (char*) &x;
 
  printf("given hex number is 0x%x\n",x);


  printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("Underlying architecture is little endian. \n");
  }
  else
  {
     printf ("Underlying architecture is big endian. \n");
  }
 
  return 0;
}
