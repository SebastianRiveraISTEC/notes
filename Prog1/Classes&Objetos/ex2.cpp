#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	string nome;
public:
	Animal(string nome) {
		this->nome = nome;
	}
	
	string getNome() {
		return nome;
	}

	virtual void falar() {
		cout<<"Eu sou um animal"<<endl;
	}
};

class Cachorro : public Animal {
private:
	string raca;
public:
	Cachorro(string nome, string raca): Animal(nome){
		this->raca = raca;
	}
	string getRaca() {
		return raca;
	}
	void falar() {
		cout << "Au au!" << endl;
	}
};

class Gato : public Animal {
private:
	string pelo;
public:
	Gato(string nome, string pelo): Animal(nome){
		this->pelo = pelo;
	}
	string getPelo(){
		return pelo;
	}
	void falar(){
		cout << "Meow" <<endl;
	}
};

class Passaro : public Animal {
private:
	string penas;
public:
	Passaro(string nome, string penas): Animal(nome){
		this->penas = penas;
	}
	string getPenas(){
		return penas;
	}
	void falar(){
		cout << "Chirp" <<endl;
	}
};

int main(){

	Cachorro* c = new Cachorro("Cachorro1", "Yorkie");
	Gato* g = new Gato("Gato1", "Laranja");
	Passaro* p = new Passaro("Passaro1", "Verdes");

	cout<<"Animais"<<endl;
	cout<<c->getNome() << " "<< c->getRaca()<< " ";
	c->falar();
	cout<<endl;
	cout<<g->getNome() << " "<< g->getPelo()<< " ";
	g->falar();
	cout<<endl;
	cout<<p->getNome() << " "<< p->getPenas()<< " ";
	p->falar();
	cout<<endl;



	return 0;
}