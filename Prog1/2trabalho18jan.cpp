#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Produto {
	string nome;
	float preco;
	int quantidade;
};

int main(){
	string inp = "";
	string nome;
	float preco;
	int quantidade;


	do{
		Produto x;
		cout<<"Introduza o nome: ";
		cin>>x.nome;
		cout<<"Introduza o preco: ";
		cin>>x.preco;
		cout<<"Introduza a quantidade: ";
		cin>>x.quantidade;
		ofstream arquivo;

		arquivo.open("produtos.txt", ios::app);
		arquivo << x.nome << " " << x.preco << " " << x.quantidade << endl;
		arquivo.close();
		cout<<"Guardado, sair?";
		cin>>inp;

	}while(inp != "sair");

	return 0;
}