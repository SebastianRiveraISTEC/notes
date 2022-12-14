#include <stdio.h>


int main(){

	int matrx[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int i,j;
	for(i = 0;i<4;i++){
		for(j = 0; j<4;j++){
			if(i+j == 3 ){
				printf("%d \n",matrx[i][j]);
			}
		}
	}

	return 0;
}
