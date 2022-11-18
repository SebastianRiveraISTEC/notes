#include <iostream>
#include <cmath>

using namespace std;

int decToBin(int x){
	int aux = x;
	int ans = 0;
	int cnt = 0;
	while(aux>1){
		ans += aux%2 * pow(10,cnt);
		aux/=2;
		cnt++;
	}
	ans+= aux*pow(10,cnt);
	return ans;

}

int main(){

	int number;
	cout<<"Numero: ";
	cin>>number;
	cout<<number<<" em binario e "<< decToBin(number)<<endl;

	return 0;
}