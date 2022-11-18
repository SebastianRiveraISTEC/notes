#include <iostream>

using namespace std;

double factorial(int x){
	double ans = 1;
	for(int i=2;i<=x;i++){
		ans *= i;
	}
	return ans;
}

int main(){
	int number;
	cout<<"Numero: ";
	cin>>number;
	cout<<"Fatorial de "<<number<<" e "<< factorial(number)<<endl;

	return 0;
}