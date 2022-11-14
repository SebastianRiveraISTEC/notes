#include <iostream>
using namespace std;

void loop();
int main(){
	loop();
	return 0;
}

void loop(){
	int soma, parcela;

	while(true){
		cout<<"Introduza parcela: ";
		cin>>parcela;
		if(parcela <0){
			if(parcela == -1) break; else continue;
		}else soma+=parcela;
	}
	cout<<"Soma: "<<soma<<endl;
}