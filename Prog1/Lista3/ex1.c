#include <stdio.h>

int main(int argc, char *argv[]){

	double maior,menor;

	printf("Digite 2 valores: ");
	scanf("%lf %lf",&maior,&menor);

	if(menor>maior){
		printf("%.2lf e maior que %.2lf\n", menor,maior);
		int aux = maior;
		maior = menor;
		menor = aux;
	}else{
		printf("%.2lf e maior que %.2lf\n", maior,menor);
	}

	printf("O resultado e: %.2lf\n", (2*maior + 3*menor -2));

	return 0;
}