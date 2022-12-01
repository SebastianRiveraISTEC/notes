#include <stdio.h>

int findMin(int a,int b, int c, int d){
	if(a<=b && a<=c && a<=d){
		return a;
	}else if(b<=a && b<=c && b<=d){
		return b;
	}else if(c<=a && c<=b && c<=d){
		return c;
	}else if(d<=a && d<=c && d<=b){
		return d;
	}
}

int findMax(int a,int b, int c, int d){
	if(a>=b && a>=c && a>=d){
		return a;
	}else if(b>=a && b>=c && b>=d){
		return b;
	}else if(c>=a && c>=b && c>=d){
		return c;
	}else if(d>=a && d>=c && d>=b){
		return d;
	}
}

int main(){

	int a,b,c,d;

	printf("Digite 4 numeros inteiros: \n");
	scanf("%d %d %d %d", &a,&b,&c,&d);

	printf("O menor numero e: %d\n", findMin(a,b,c,d));
	printf("O maior numero e: %d\n", findMax(a,b,c,d));


	return 0;
}
