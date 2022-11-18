#include <iostream>

using namespace std;

int invertir(int x){ // 6.cpp
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
	int inverso = invertir(number);
	if(inverso==number)cout<<"O numero e capicua"<<endl;
	else cout<<"O numero nao e capicua"<<endl;

	return 0;
}