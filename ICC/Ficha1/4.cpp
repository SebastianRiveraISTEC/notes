#include <iostream>

using namespace std;

int soma(){
	int x=0;
	int aux = 0;
	while(x!=-1){
		cout<<"Introduza um numero: ";
		cin>>x;
		if(x>0){
			aux+=x;
		}
	}
	return(aux);
}

int main(){
	int ans = soma();
	cout<<"A soma dos numeros positivos e: "<<ans<<endl;
	return 0;
}