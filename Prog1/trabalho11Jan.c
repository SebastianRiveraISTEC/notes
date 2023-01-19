#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Aluno{

	char nome[30];
	char primeira[5];
	char segunda[5];
	char media[5];
};

void write_alunos(struct Aluno a[], int size){
	FILE *txt_file = fopen("text.txt", "a+");
	int i;
	for(i =0; i<size; i++){
		fputs(a[i].nome, txt_file);
		fprintf(txt_file, ",%s", a[i].primeira);
		fprintf(txt_file, ",%s", a[i].segunda);
		fprintf(txt_file, ",%s", a[i].media);
		fputs("\n",txt_file);
	}
	fclose(txt_file);
}

void search_aluno(char* name){
	FILE *txt_file = fopen("text.txt", "r");
	char line[1024];
	int i = 0;
	char* token;
	bool found = 0;
	while(1){
		if(fgets(line, sizeof(line), txt_file) == NULL) {
			break;
		}
		// printf("%d: %s",i, line);
		i++;
		token = strtok(line, ",");
		if(strcmp(token,name) == 0){
			found = 1;
			token = strtok(0, ",");
			char primeira[5];
			strcpy(primeira, token);
			token = strtok(0, ",");
			char segunda[5];
			strcpy(segunda, token);
			token = strtok(0, ",");
			char media[5];
			strcpy(media, token);

			printf("As notas do aluno %s sao:\nPrimeira: %s\nSegunda: %s\nMedia: %s\n", name, primeira, segunda, media);
			break;
		}
	}
	if(!found){
		printf("Aluno nao encontrado.\n");
	}
}

void insert_aluno(struct Aluno a){
	FILE *txt_file = fopen("text.txt", "a+");
	fputs(a.nome, txt_file);
	fprintf(txt_file, ",%s", a.primeira);
	fprintf(txt_file, ",%s", a.segunda);
	fprintf(txt_file, ",%s", a.media);
	fputs("\n",txt_file);
	fclose(txt_file);
}

int main(){
	struct Aluno a1 = {"sebas","15","17","16"};
	struct Aluno a2 = {"nome","10","8","9"};
	struct Aluno a3 = {"outro","10","8","9"};

	struct Aluno l[3] = {a1,a2,a3};

	// write_alunos(l, sizeof(l)/sizeof(l[0]));

	search_aluno("sebas");
	struct Aluno a4 = {"test", "12", "14", "13"};
	insert_aluno(a4);
	// search_aluno("test");

	int i;

	char name[30];
	char p[20];
	char s[20];
	char m[20];
	int n = 3;
	// for(i=0; i<n;i++){
	// 	printf("Introduza o nome: ");
	// 	scanf("%s", name);
	// 	printf("Introduza a primeira nota: ");
	// 	scanf("%s", p);
	// 	printf("Introduza a segunda nota: ");
	// 	scanf("%s", s);
	// 	printf("Introduza a media: ");
	// 	scanf("%s", m);
	// 	printf("\n");

	// 	struct Aluno aux = {};
	// 	strcpy(aux.nome, name);
	// 	strcpy(aux.primeira, p);
	// 	strcpy(aux.segunda, s);
	// 	strcpy(aux.media, m);
	// 	insert_aluno(aux);
	// }

	return 0;
}