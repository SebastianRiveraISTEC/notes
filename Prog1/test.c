#include <stdio.h>

int main(int argc, char *argv[]){
	int n1, n2,n3, x, y;
	printf("Digite 3 valores inteiros:\n");
	scanf("%d %d %d", &n1, &n2, &n3);

	float media = (n1+n2+n3)/3;
	
	printf("A media dos numeros e %.2f\n", media);

	printf("Digite 2 valores inteiros:\n");
	scanf("%d %d", &x, &y);

	if(x>y){
		printf("x e maior que y\n");
		printf("%.2f\n", x*media);
	}else{
		printf("y e maior que x\n");
		printf("%.2f\n", y*media);
	}

	return 0;
}