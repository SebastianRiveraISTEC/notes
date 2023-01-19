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
	int Total = 0;
	ifstream arquivo;
	arquivo.open("produtos.txt", ios::in);
	if(arquivo.is_open()){
		string nome;
		string preco;
		string quantidade;
		while(getline(arquivo, nome, ' ') && getline(arquivo, preco, ' ') && getline(arquivo, quantidade)){
         cout << "nome: "<< nome << "\t"
         << " preco: " << preco << "\t"
         << "quantidade: " << quantidade << "\t"
          << "Total: " << stof(preco)*stoi(quantidade)<<
          endl;
          Total += stof(preco)*stoi(quantidade);
      }	
      cout<<"Preco total final: "<< Total<<endl;
	}

	return 0;
}