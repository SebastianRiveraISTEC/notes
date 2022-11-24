#include <stdio.h>

int main(int argc, char *argv[]){
	int n1, n2,n3;

	float media;
	int i =0;
	while(i<20){
		printf("Digite 3 valores inteiros:\n");
		scanf("%d %d %d", &n1, &n2, &n3);
		media = (n1+n2+n3)/3;
		printf("A media das notas do aluno %d e %.2f",i,media);
		i++;
	}

	return 0;
}