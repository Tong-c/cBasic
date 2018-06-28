#include <stdio.h>
#include <math.h>

double distance(double x1,double y1,double x2,double y2)
{
	double dx = x2 - x1;
	double dy = y2 - y1;
	double disquared = dx * dx + dy * dy;
	double result = sqrt(disquared);
	return result;
}


double area(double radius)
{
	return 3.1416 * radius * radius;
}


int main(void)
{
	printf("distance is %f\n",distance(1.0,2.0,4.0,6.0));
	return 0;
}


