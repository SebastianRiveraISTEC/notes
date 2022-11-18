#include <iostream>
#include <cmath>

using namespace std;

bool primo(int x){ //ex 19
	for(int i = 2; i<=sqrt(x);i++){
		if(x%i == 0)return false;
	}
	return true;
}

void nPrimeirosPrimos(int n){
	if(n<1)return;

	for(int i=2;i<n;i++){
		if(primo(i)){
			cout<<i<<endl;
		}
	}
}

int main(){
	int numero;
	cout<<"Numero: ";
	cin>>numero;
	nPrimeirosPrimos(numero);

	return 0;
}