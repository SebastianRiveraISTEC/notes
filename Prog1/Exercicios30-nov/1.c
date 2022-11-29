#include <stdio.h>


double fatorial(int x){
	double aux = 1;
	for(int i = 2; i<=x;i++){
		aux*=i;
	}
	return aux;
}



int main(){

	int a;

	printf("Numero: \n");
	scanf("%d",&a);

	double res = fatorial(a);

	printf("Fatorial: %f\n", res);



	return 0;
}