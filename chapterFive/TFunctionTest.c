#include <math.h>

void print_logarithm(double x)
{
	if(x < = 0.0){
		printf("Positive numbers only,please.\n");
		return;
	}
	printf("The log of x is %f\n",log(x));
}


int is_even(int x)
{
	if(x % 2 == 0)
		return 1;
	else 
		return 0;
}





