#include <stdio.h>

int countNine()
{
	int i = 1;
	int count = 0;
	while(i < 100){

		if(i == 9){
			count++;
		}

		if(i > 9 && i % 10 == 9){
			count++;
		}
		
		if(i > 9 &&  i / 10 == 9){
			count++;
		}
				
		i++;
	}
	return count;
}



int main(void)
{
	printf("%d\n",countNine());
}



