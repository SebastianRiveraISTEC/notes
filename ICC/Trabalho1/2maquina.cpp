#include <iostream>
using namespace std;
void selos();

int main(){

	selos();

	return 0;
}


void selos(){
	int quantia,selos, selos3, selos5, troco;

	cout<< "Introduza quantia: ";
	try{
		cin>>quantia;
		if(quantia >=8){
			selos = quantia/8;
			troco = quantia%8;
			cout<<"Selos8: "<<selos<<endl;
			cout<<"Troco: "<<troco<<endl;

			switch(troco){
				case 0:
					selos3 = selos;
					selos5 = selos;
					break;
				case 1:
					selos5 = selos-1;
					selos3 = selos+2;
					break;
				case 2:
					selos5=selos+1;
					selos3=selos-1;
					break;
				case 3:
					selos5=selos;
					selos3=selos+1;
					break;
				case 4:
					if(selos>1){
					selos5=selos+2;
					selos3=selos-2;
					}else{
						selos5 = selos-1;
						selos3 = selos+3;
					}
					break;
				case 5:
					selos5 = selos+1;
					selos3 = selos;
					break;
				case 6:
					selos5=selos;
					selos3=selos+2;
					break;
				case 7:
					selos5=selos+1;
					selos3=selos-1;
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

