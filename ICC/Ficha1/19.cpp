#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool primo(int x){
	for(int i = 2; i<=sqrt(x);i++){
		if(x%i == 0)return false;
	}
	return true;
}

int main(){
	int numero;
	cout<<"Numero: ";
	cin>>numero;
	string ans = (primo(numero)?" e ":" nao e ");


	cout<<"O numero "<<numero<<ans<<"primo"<<endl;

	return 0;
}



