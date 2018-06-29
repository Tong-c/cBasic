#include <stdio.h>

int factorial(int n)
{
	if(n == 0)
		return 1;
	else {
		int recurse = factorial(n - 1);
		int result = n * recurse;
		return result;
	}
}


int gcd(int a,int b)
{
	if(a % b == 0) {
		return b;
	} else {
		return gcd(b,a % b);
	}	
}


int fibonacci(int n)
{
	if(n == 0) {
		return 0;
	}
	if(n == 1) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);	
}


int main(void)
{
	
	printf("%d和%d的最大公約數為%d\n",50,4,gcd(50,4));
	printf("%d的斐波那契數列為%d\n",5,fibonacci(5));
	return 0;
}
