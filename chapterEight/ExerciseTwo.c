/* 生成10-20隨機整數 */

#include <stdio.h>
#include <stdlib.h>


int gen_random()
{
	return (rand() % 10) + 10;

}


int main(void)
{
	int a[10], i;
	for(i = 0; i < 10; i++)
		printf("a[%d]=%d\n", i,gen_random());
	
}
