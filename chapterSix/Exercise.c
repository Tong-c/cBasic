 #include <stdio.h>


/* 打印小九九乘法表 */
int main(void)
{
	int i,j;
	for(i = 1; i <= 9; i++ ){
		for(j = 1; j <= i; j++){
			printf("%d \t",i*j);
		}
		printf("\n");
	}	
}
