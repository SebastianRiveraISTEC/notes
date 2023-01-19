#include <stdio.h>
#include <string.h>

int main(){

	char str1[50];
	char str2[50];

	printf("Digite um string: ");
	scanf("%s", str1);
	printf("Digite um string: ");
	scanf("%s", str2);

	if(strcmp(str1, str2) == 0){
		printf("Os strings sao iguais\n");
	}else{
		printf("Os strings sao diferentes\n");
	}

	return 0;
}