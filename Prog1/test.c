#include <stdio.h>

int main(){
	int i,j;
	int x;

	for(i=1;i<=100;i++){
		x = 0;
		for(j=2;j<i;j++){
			if(i%j==0){
				x = 1;
				//nao e primo
				break;
			}
		}
		if(x == 0){
			printf("%d e primo\n", i);
			//e primo
		}else if(x == 1){
			printf("%d nao e primo\n", i);
		}
	}
	return 0;
}