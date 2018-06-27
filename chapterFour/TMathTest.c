#include <stdio.h>


int main(void)
{
	int num = 94;
	int numInTen = (num/10)%10;
	int numInOne = num % 10;
	printf("%d的十位是：%d",num, numInTen);
	printf("\n");
	printf("%d的個位是：%d",num, numInOne);
	return 0;
}




void print_tenAndOne(int num)
{
	int numInTen =  (num/10)%10;
	int numInOne = num % 10;
	printf("%d的十位數是：%d",num,numInTen);
	printf("\n");
	printf("%d的個位數是：%d",num,numInOne);
	printf("\n");
	return 0;
}

	
