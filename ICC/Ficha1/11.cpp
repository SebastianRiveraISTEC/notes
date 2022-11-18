#include <iostream>
#include <climits>
using namespace std;

void calcular(int n){
	int max = INT_MIN;
	int min = INT_MAX;
	int soma = 0;
	for(int i=0;i<n;i++){
		float number;
		cout<<"Introduza um numero: ";
		cin>>number;
		if(number>max)max = number;
		else if(number<min)min = number;
		soma+=number;
	}
	cout<<"A soma dos numeros e: "<<soma<<endl;
	cout<<"A media dos numeros e: "<<soma/n<<endl;
	cout<<"O maximo dos numeros e: "<<max<<endl;
	cout<<"O minimo dos numeros e: "<<min<<endl;
}

int main(){

	int number;
	cout<<"Numero: ";
	cin>>number;
	calcular(number);


	return 0;
}