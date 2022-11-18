#include <iostream>

using namespace std;

int invertir(int x){
	int ans = 100*(x%10) + 10*(x/10%10) + x/100;
	return ans;
}

int main(){
	int number;
	cout<<"Numero: ";
	cin>>number;
	cout<<"O numero "<<number<<" invertido e "<<invertir(number)<<endl;

	return 0;
}