#include <stdio.h>

int foo(int a, int b, int c){
	return a+2*b-3*c;
}

int main(){

	int a,b,c;

	printf("Digite 3 numeros inteiros: ");
	scanf("%d %d %d", &a,&b,&c);

	printf("%d\n", foo(a,b,c));

	return 0;
}
