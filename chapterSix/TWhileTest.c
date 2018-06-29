#include <stdio.h>

int factorial(int n)
{
	int result = 1;
	while(n > 0) {
		result = result * n;
		n = n - 1;
	}
	return result;
}


int 3xplus1(int n)
{
	while(n != 1) {
		if( n % 2 == 0) {
			n = n / 2;
		} else {
			n = n * 3 + 1;
		}
}


int gcd(int a,int b)
{
	int result = 0;
	while( a % b != 0) {
		
	}
	return b;
}
