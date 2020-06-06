#include <stdio.h>

int main(void){

	int appa = 0;

	printf("This is the memory address %p\n", &appa); 

	int *x;
	*x = 100;

	printf(" This is x %d\n", *x);
	printf("This is the memory address of x %p\n", x);

	return 0;


}

