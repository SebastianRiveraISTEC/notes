#include <stdio.h>
int main(void){
	int a,b;
	printf("Introduza o valor de a: ");
	scanf("%d",&a);
	printf("Introduza o valor de b: ");
	scanf("%d",&b);

	int aux;
	aux = a;
	a = b;
	b = aux;

	printf("O novo valor de a e: %d\n",a);
	printf("O novo valor de b e: %d\n",b);
	return 0;
}