#include <stdio.h>

int main(){
	int i,j;
	int v[4][5];
	int aux;
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("Digite o numero para linha %d e coluna %d: ", i,j);
			scanf("%d",&aux);
			v[i][j] = aux;
		}
	}
	printf("[ ");
	for(i=0;i<4;i++){
		printf("[ ");
		for(j=0;j<5;j++){
			
			printf("%d ",v[i][j]);
		}
		if(i!=3)printf("],\n");else printf("]");	
	}
	printf(" ]\n");

	return 0;
}