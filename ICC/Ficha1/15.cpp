#include <iostream>

using namespace std;

int potencia(int x, int y){
	int ans =1;
	for(int i=0;i<y;i++){
		ans*=x;
	}
	return ans;
}

int main(){
	int x,y;
	cout<<"Numero base: ";
	cin>>x;
	cout<<"Numero exponente: ";
	cin>>y;
	cout<<x<<" elevado a "<<y<<" e "<< potencia(x,y)<<endl;
	return 0;
}