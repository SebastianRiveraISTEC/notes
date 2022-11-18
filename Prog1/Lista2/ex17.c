#include <stdio.h>
int main(void){
	int idade, paterno, materna, paterna, materno;

	printf("Introduza a sua idade: ");
	scanf("%d",&idade);
	printf("Introduza a idade do teu avô paterno: ");
	scanf("%d",&paterno);
	printf("Introduza a idade da tua avó paterna : ");
	scanf("%d",&paterna);
	printf("Introduza a idade do teu avô materno: ");
	scanf("%d",&materno);
	printf("Introduza a idade da tua avó materna : ");
	scanf("%d",&materna);

	printf("A diferença de idades com o teu avô paterno é: %d anos\n",paterno-idade);
	printf("A diferença de idades com a tua avó paterna é: %d anos\n",paterna-idade);
	printf("A diferença de idades com o teu avô materno é: %d anos\n",materno-idade);
	printf("A diferença de idades com a tua avó materna é: %d anos\n",materna-idade);
	return 0;
}