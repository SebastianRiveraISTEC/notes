#include <iostream>
#include <string>

using namespace std;

class Conta{
private:
	int numero;
	string titular;
	float saldo;

public:
	Conta();
	Conta(int numero, string titular, float saldo){
		this->numero = numero;
		this->titular = titular;
		this->saldo = saldo;
	}

	int getNumero(){
		return numero;
	}

	string getTitular(){
		return titular;
	}

	float getSaldo(){
		return saldo;
	}

	void depositar(int quantidade){
		this->saldo += quantidade;
	}

	void levantar(int quantidade){
		if(quantidade>this->saldo){
			cout<<"Saldo insuficiente"<<endl;
			return;
		}else{
			this->saldo -= quantidade;
		}
	}

};

int main(){

	Conta* c1 = new Conta(1,"Sebas", 10);
	Conta* c2 = new Conta(2,"Guilherme", 20);
	Conta* c3 = new Conta(3,"Bruno", 40);

	cout<<c1->getTitular() << " " << c1->getNumero()<< " "  << c1->getSaldo()<<endl;
	cout<<c2->getTitular() << " " << c2->getNumero()<< " "  << c2->getSaldo()<<endl;
	cout<<c3->getTitular() << " " << c3->getNumero()<< " "  << c3->getSaldo()<<endl;

	cout<<"Depositamos 20 a Sebas e levantamos 5 a Guilherme"<<endl;

	c1->depositar(20);
	c2->levantar(5);

	cout<<c1->getTitular() << " " << c1->getNumero()<< " "  << c1->getSaldo()<<endl;
	cout<<c2->getTitular() << " " << c2->getNumero()<< " "  << c2->getSaldo()<<endl;
	cout<<c3->getTitular() << " " << c3->getNumero()<< " "  << c3->getSaldo()<<endl;

	return 0;
}
