#include <stdio.h>

int squared(int x) {
	return x * x;
}

int hex(){
	for (int i = 0; i < 16; ++i)
	{
		printf("%x \n",i);

	}

	return 0;


}



int main(void) {
 	
	printf("Helloooooooooooooooooooo Nishant!\n");

	printf("GoooodBye!\n");

	printf("Please enter first number");

	int num = 0;
	int test = 0;
	scanf("%d",&num);

	printf("Please enter second number");

	scanf("%d",&test);

	
	printf("the answer is %d and the answer is %d", squared(num), squared(test));
	printf ("\n");

	hex();	

	//printf("hex %x", 10);
	//printf ("\n"); 

	return 0;

} 



