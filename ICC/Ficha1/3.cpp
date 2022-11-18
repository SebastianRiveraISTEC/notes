#include <iostream>

using namespace std;

int somaNPrimeiros(int n){
	int aux = 0;
	for(int i=1;i<=n;i++){
		aux+=i;
	}
	return aux;
}

int main(){
	int number;
	cout<<"Numero: ";
	cin>>number;
	cout<<"A soma dos "<<number<<" primeiros numeros e "<<somaNPrimeiros(number)<<endl;

	return 0;
}