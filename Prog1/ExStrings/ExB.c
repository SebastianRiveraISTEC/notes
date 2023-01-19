#include <stdio.h>
#include <string.h>

int main(){

	char str1[50];
	char str2[50];

	printf("Digite um string: ");
	scanf("%s", str1);
	printf("Digite um string: ");
	scanf("%s", str2);

	if(strlen(str1) > strlen(str2)){
		printf("O string %s e maior em tamanho\n", str1);
	}else if(strlen(str1) < strlen(str2)){
		printf("O string %s e maior em tamanho\n", str2);
	}else{
		printf("Os strings sao de igual tamanho\n");
	}

	return 0;
}