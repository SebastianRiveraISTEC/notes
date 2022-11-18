#include <iostream>

using namespace std;

int invertir(int x){
	int ans = 0;
	int aux;
	while(x!=0){
		aux = x%10;
		ans = (ans*10)+aux;
		x/=10;
	}
	return ans;
}

int main(){
	int number;
	cout<<"Numero: ";
	cin>>number;
	cout<<"O numero "<<number<<" invertido e "<<invertir(number)<<endl;

	return 0;
}