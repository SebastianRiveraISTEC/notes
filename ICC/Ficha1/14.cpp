#include <iostream>

using namespace std;

double factorial(int x){
	if(x==1) return 1;
	return x * factorial(x-1);

}

int main(){
	int number;
	cout<<"Numero: ";
	cin>>number;
	cout<<"Fatorial de "<<number<<" e "<< factorial(number)<<endl;
	return 0;
}