---
cssclass:  whiteRed, whiteRed-rounded, wideTable
---

![[Pasted image 20230206150149.png]]

## Funções Strings

- Leitura
	- scanf. Ex. `scanf("%d", &variable)`
	- gets. Lê carateres até encontrar '\\n' $\rightarrow$ substitui o '\\n' por '\\0'
- Escrita:
	- Printf. Ex `printf("Digite seu nome: ")`, `printf("%d, variable")` 
	- Puts. Ex. `puts("Bom dia")`, `puts(variable)`
- string.h
	- strlen(str1) $\rightarrow$ returns str1 length, counts spaces 
	- strcpy(strDestino, strFonte) $\rightarrow$ Copies strFonte into strDestino 
	- strcat(str1, str2) $\rightarrow$ Concatenates str1 and str2 into str1
	- strcmp(str1, str2)$\rightarrow$ Compares str1 and str2. 
		- 0 $\rightarrow$ =
		- \>1 $\rightarrow$ str1>str2
		- \<1 $\rightarrow$ str2>str1

## Structs

```c
struct aluno{
	char nome[50];
	int n_aluno;
	float media;
};

int main(){
	struct aluno a1 = {"Nome",1,10.0};
	struct aluno a2;
	struct aluno* a3;
	a2.nome = "sebas";
	a2.n_aluno = "2022317";
	a2.media = 15.0;
	a3->nome = "Outro";
	a3->n_aluno = 2;
	a3->media = 19.5;
}
```

## Leitura de arquivos

| Modo de abertura | O arquivo existe         | O arquivo não existe | Permissão de leitura | Permissão de escrita |
| ---------------- | ------------------------ | -------------------- | -------------------- | -------------------- |
| "r"/"rb"         | abre                     | ERRO                 | ✔                    |                      |
| "w"/"wb"         | creia novo, apaga antigo | cria                 |                      | ✔                    |
| "a"/"ab"         | acrescenta dados no fim  | cria                 |                      | ✔                    |
| "r+"/"r+b"       | abre                     | ERRO                 | ✔                    | ✔                    |
| "w+"/"w+b"       | cria novo, apaga antigo  | cria                 | ✔                    | ✔                    |
| "a+"/"a+b"       | acrescenta dados no fim  | cria                 | ✔                    | ✔                      |

### Funções para arquivos

fread $\rightarrow$ lê uma quantidade de dados de um arquivo binario e os armazena em um buffer

fread(var_buffer, n_bytes, qtdd, arquivo)

● var_buffer: ponteiro a posição de memória (buffer) onde os dados serão lidos
● n_bytes: tamanho (em bytes) de cada unidade (elemento) a ser lida
● qtdd: número de elementos a serem lidos
● arquivo: ponteiro ao arquivo (FILE*) do qual serão lidos os dados


fgets $\rightarrow$ lê uma linha de um arquivo de texto e a armazena em um buffer

fgets(texto, qttd, arquivo)

● texto: uma string onde será colocado o conteúdo lido
● qtdd: quantidade de caracteres que serão lidos
● arquivo: ponteiro ao arquivo (FILE*) do qual serão lidos os dados

fgetc $\rightarrow$ lê um único caractere de um arquivo e o retorna como um inteiro

arquivo: ponteiro ao arquivo (FILE*) do qual serão lidos os dados

fscanf $\rightarrow$ lê dados de um arquivo de texto usando um formato especificado

● arquivo: ponteiro ao arquivo (FILE*) do qual serão lidos os dados
● os outros parâmetros são iguais aos da função scanf