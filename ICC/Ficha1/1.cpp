#include <iostream>

using namespace std;

double dobro(double x){
	return(2*x)
}

int main(){
	double number;
	cout<<"Numero: ";
	cin>>number;
	cout<<"O dobro do numero e "<<dobro(number)<<endl;

	return 0;
}