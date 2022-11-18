#include <iostream>
using namespace std;

float iva(int x){
	if(x>0){
	if(x<1000)return 0.1;
	else if(x<1500)return 0.15;
	else if(x<2000)return 0.2;
	else return 0.3;	
	}
}

int main(){
	int number;
	cout<<"Salario: ";
	cin>>number;
	cout<<"O salario liquido correspondente a o salario bruto de "<<number<<" e "<< number*(1-iva(number))<<endl;

	return 0;
}