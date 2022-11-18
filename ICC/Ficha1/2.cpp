#include <iostream>
#include <string>

using namespace std;


bool paridade(int x){
	if(x%2==0) return true;
	else return false;
}

int main(){
	int number;
	cout<<"Numero: ";
	cin>>number;
	string ans = (paridade(number)?"par":"impar");
	cout<<"O numero e "<<ans<<endl;

	return 0;
}