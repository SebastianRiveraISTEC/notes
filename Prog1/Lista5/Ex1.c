#include <stdio.h>
#define SIZE 20

void initVector(int v[]){
	int i;
	for(i=0;i<SIZE;i++){
		v[i] = i+3;
	}
}

void ImprimeVetor(int v[]){
	int i;
	printf("[ ");
	for(i=0;i<SIZE;i++){
		printf("%d ",v[i]);
	}
	printf("]\n");
}

void ImprimeMult3(int v[]){
	int i;
	printf("[ ");
	for(i=0;i<SIZE;i++){
		if(v[i]%3==0) printf("%d ",v[i]);
	}
	printf("]\n");	
}



int main(){
	int v[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	ImprimeVetor(v);
	ImprimeMult3(v);

	return 0;
}