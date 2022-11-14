#include <iostream>
using namespace std;

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();

int main(){
	ex1();

	return 0;
}

void ex1(){
	int x,y;
	for(x=0,y=1;x<3;x++){
		cout<<"Loop numero: "<<x<<endl;
		cout<<"Inicio do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
		y+=x;
		cout<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
	}
	cout<<"Fora do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
}

void ex2(){
	int y=0;
	int x=0;
	int aux = 0;
	while(++x<5){
		cout<<"Loop numero: "<<aux<<endl;
		cout<<"Inicio do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
		y+=x++;
		cout<<"y: "<<y<<"\t"<<"x: "<<x<<endl;		
		aux++;
	}
	cout<<"Fora do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
}

void ex3(){
	int y=0;int x=0;
	int aux = 0;
	while(x++<5){
		cout<<"Loop numero: "<<aux<<endl;
		cout<<"Inicio do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
		y+=x++;
		cout<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
		aux++;			
	}
	cout<<"Fora do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
}

void ex4(){
	int x,y;
	for(x=0,y=1;;x++){
		cout<<"Loop numero: "<<x<<endl;
		cout<<"Inicio do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
    	if(x%2==0){
    		cout<<"continue"<<endl;
    		continue;
    	}
    	y+=x;
    	cout<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
    	if(x==4){
    		cout<<"break"<<endl; 
    		break;
    	}
	}
	cout<<"Fora do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
}

void ex5(){
	int aux = 0;
	int x,y;
	for(x=1,y=2;x<4;x++){
		cout<<"Loop numero: "<< aux<<endl;
		aux++;
		cout<<"Inicio do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
	    switch(x){
	        case 1:
	        	cout<<"Caso 1"<<endl;
	            y+=2;
        		cout<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
	        case 2:
	        	cout<<"Caso 2"<<endl;
	            y+=x;
				cout<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
				cout<<"break"<<endl;
	            break;
	        default:
	        	cout<<"Default"<<endl;
	            y++;
	            cout<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
	    }
	}	
	cout<<"Fora do loop:\t"<<"y: "<<y<<"\t"<<"x: "<<x<<endl;
}
