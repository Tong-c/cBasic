#include <stdio.h>

void testOne(int x)
{	if(x > 0 && x < 10);
	else 
		printf("x is out of range.\n");
}


void answerOne(int x)
{
	if(x <= 0 || x >= 10)
	{
		printf("x is out of range.\n");
	}
}


void testTwo(int x,int y)
{
	if(x > 0)
		printf("Test OK!\n");
	else if(x <= 0 && y > 0)
		printf("Test OK!\n");
	else 
		printf("Test failed!\n");
}



void answerTwo(int x ,int y)
{
	if(x <= 0 && y <= 0)
		printf("Test failed!\n");
	else 
		printf("Test OK!\n");
}
	
void testThree(int x,int y)
{
	if(x > 1 && y != 1)
		printf("statement one\n");
	else if(x < 1 && y != 1)
		printf("statement two\n");
	else 
		printf("statement three\n");
}



int main(void)
{
	testOne(11);
	answerOne(11);
	testTwo(-1,-1);
	answerTwo(-1,-1);
	testThree(1,1);
}





