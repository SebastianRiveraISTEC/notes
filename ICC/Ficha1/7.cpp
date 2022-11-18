#include <iostream>

using namespace std;

int dc(int x){
	return(5*(x%10) + 3*((x/10)%10) + x/100);
}

int main(){
	int number;
	cout<<"Numero: ";
	cin>>number;
	cout<<"O digito de controle do numero "<<number<<" e "<<dc(number)<<endl;

	return 0;
}