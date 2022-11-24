#include <stdio.h>

int main(int argc, char *argv[]){

	float a,b;
	char oper ;

	printf("Digite um valor: ");
	scanf("%f",&a);

	do{
		printf("Digite uma operacao (+,-,*,/): ");
		scanf(" %c",&oper);
	}while(oper != '+' && oper != '-' && oper != '*' && oper != '/');


	printf("Digite um valor: ");
	scanf("%f",&b);

	if(oper == '+'){
		printf("%f\n",a+b);
	}else if(oper == '-'){
		printf("%f\n",a-b);
	}else if(oper == '*'){
		printf("%f\n",a*b);
	}else{
		if(b == 0){
			printf("Divisao por 0 nao existe\n");
		}else{
			printf("%f\n",a/b);
		}
	}

	return 0;
}