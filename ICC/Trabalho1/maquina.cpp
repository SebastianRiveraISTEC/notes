#include <iostream>
using namespace std;
void selos();

int main(){

	selos();

	return 0;
}


void selos(){
	int quantia, selos3, selos5, troco;

	cout<< "Introduza quantia: ";
	try{
		cin>>quantia;
		if(quantia >=8){
			selos5 = quantia/5;
			troco = quantia%5;
			cout<<"Troco: "<<troco<<endl;

			switch(troco){
				case 0:
					selos3 = 0;
					break;
				case 1:
					selos5--;
					selos3=2;
					break;
				case 2:
					selos5-=2;// selos5 = selos5 -2;
					selos3=4;
					break;
				case 3:
					selos3 = 1;
					break;
				case 4:
					selos5--; //selos5 = selos5--;
					selos3 = 3;
					break;
				default:
					selos5 = 0;
					selos3 = 0;
			}
				cout<<"Euros: "<<quantia<<endl;
				cout<<"Selos de 5: "<<selos5<<endl;
				cout<<"Selos de 3: "<<selos3<<endl;		

		}else{
			cout<< "Quantia insuficiente"<<endl;
		}
		}catch(exception erro){
		cout<< "Quantia invalida"<<endl;
	}
}

