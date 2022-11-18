#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <climits>

using namespace std;

int MDC(int x, int y){
	if(y>x){
		int aux = x;
		x = y;
		y = aux;
	}
	int mdc = 1;
	for(int i = 2; i<=y;i++){
		if(x%i == 0 && y%i == 0) mdc = i;
	}
	return mdc;
}

int main(){
	int numeroX;
	cout<<"Numero 1: ";
	cin>>numeroX;

	int numeroY;
	cout<<"Numero 2: ";
	cin>>numeroY;

	cout<<"O maximo divisor comum entre "<<numeroX<<" e "<<numeroY<<" : "<<MDC(numeroX,numeroY)<<endl;


	return 0;
}