#include <stdio.h>
#include <math.h>


void print_logarithm(double x)
{
	if(x <= 0.0){
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


int is_even_two(int x)
{
	return !(x % 2);
}


int is_leap_year(int year)
{
	if((year % 4 == 0) &&(year % 100 != 0))
	{
		return 1;
	}
	if(year % 400 == 0)
	{
		return 1;
	}
	return 0;
}

double myround(double x)
{
	if(x > 0.0)
	{
		return ceil(x);
	}
	if(x < 0.0)
	{
		return floor(x);
	}
	return 0;
}

int main(void)
{
	printf("四捨五入的值為%f\n",myround(4.54));
	return 0;
}








