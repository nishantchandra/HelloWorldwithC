#include <stdio.h>

int main(void){
	
	int balance[] = {5,6,7,8,9};
	int array_size;
	array_size = sizeof(balance)/sizeof(int);

	for (int i = 0; i < array_size; ++i)
	{
		printf("These are the values in the array %d\n", balance[i]);
	}

	printf("starting point of array %p", &balance);
	printf("location of second element %p", &balance + 1);

	return 0;
}