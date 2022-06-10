/* C program to show extern storage class usage */
//main.c and support.c should be compiled like this
// gcc main.c support.c

#include<stdio.h>

int count;

extern void write_extern();

int main(){

	count = 17;
	write_extern();
	}
