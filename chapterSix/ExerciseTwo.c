
#include <stdio.h>


void diamond(int num, char sign){
	
	for(int i = 0;i < num; i++){
			
		if(i == (num - 1)/2 ){
			for(int j = 0; j < num; j++){
				printf("%c\t",sign);
			}

		}else if(i < (num - 1)/2) {
			int x = (num - 1)/2 -i;
			int z = (num - 1)/2 + i;
			for(int j = 0; j < num; j++){
				if(j < x || j > z){
					printf("\t");
				}else {
					printf("%c\t",sign);
				}
			}
					
		}else{
			int x = (num - 1)/2 - (num - 1 - i);
			int z = (num - 1)/2 + (num - 1 - i);
			for(int j = 0; j < num; j++){
                                if(j < x || j > z){
                                        printf("\t");
                                }else {
                                        printf("%c\t",sign);
                                }
                        }
		}
		printf("\n");
	}	
}



int main(void)
{
	diamond(7,'*');
}
