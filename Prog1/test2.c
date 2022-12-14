#include <stdio.h>

#define TAM 10

int main(){
	int i;

	float vec1[TAM] = {1,2,3,4,5,6,7,8,9,10};
	float vec2[TAM] = {10,20,30,40,50,60,70,80,90,100};
	float vec3[TAM] = {1,1,1,1,1,1,1,1,1,1};
	
	for(i = 0;i<TAM;i++){
		printf("%.2f ", (vec1[i]+vec2[i]+vec3[i])/3);
	}
	printf("\n");

	return 0;
}