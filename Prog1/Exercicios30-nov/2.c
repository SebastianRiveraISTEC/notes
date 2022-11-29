#include <stdio.h>


double soma(int x, int y){
	return x+y;
}

double resto(int x, int y){
	return x-y;
}

double mult(int x, int y){
	return x*y;
}

double div(int x, int y){
	return x/y;
}

double fatorial(int x){
	double aux = 1;
	for(int i = 2; i<=x;i++){
		aux*=i;
	}
	return aux;
}

void menu(){
	int option =-1;
	while(option!=0){
		printf("Choose operation: \n1)Addition\n2)Substraction\n3)Multiplication\n4)Division\n5)Factorial\n0)Exit\n");
		scanf("%d",&option);
	
	int a,b;
	double res;
	if(option!=0){		
		printf("Numbers: ");
		scanf("%d",&a);
		if(option!=5) scanf("%d",&b);
	}


	switch(option){	
		case 1:
			printf("a and b: %d and %d\n",a,b);
			printf("%f\n\n", soma(a,b));
			break;
		case 2:
			printf("%f\n\n", resto(a,b));
			break;
		case 3:
			printf("%f\n\n", mult(a,b));
			break;
		case 4:
			printf("%f\n\n", div(a,b));
			break;
		case 5:
			printf("%f\n\n", fatorial(a));
			break;
		case 0:
			printf("Exiting\n");
			break;
		default:
			printf("Please choose a valid option\n\n");
		}
	}

}

int main(){
	menu();
	return 0;
}