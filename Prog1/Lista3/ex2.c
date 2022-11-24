#include <stdio.h>

int main(int argc, char *argv[]){

	float a,b,c;
	int n=0;
	while(n<10){		
		printf("Digite 3 valores: ");
		scanf("%f %f %f",&a,&b,&c);

		if(a<b){
			if(a<c){//a
				printf("A mitade do menor numero e %.2f\n",(a/2));
			}else{//c
				printf("A mitade do menor numero e %.2f\n",c/2);
			}
		}else if(b<c){//b
			printf("A mitade do menor numero e %.2f\n",b/2);
		}else{//c
			printf("A mitade do menor numero e %.2f\n",c/2);
		}
			n++;
	}
	return 0;
}