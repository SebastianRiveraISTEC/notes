#include <stdio.h>


double fatorial(int x){
	if(x == 0) return 1;
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

	printf("Fatorial: %f\n", fatorial(a));

	return 0;
}