#include <iostream>

using namespace std;

void troca(int *a, int *b);
void troca2(int &a, int &b);

int main(){

	int x=2, y=3;
	cout<<"X: " <<x<< "\tY: "<<y<<endl;
	troca(&x,&y);
	cout<<"X: " <<x<< "\tY: "<<y<<endl;
	cout<<"\n\n\n";
	cout<<"X: " <<x<< "\tY: "<<y<<endl;
	troca2(x,y);
	cout<<"X: " <<x<< "\tY: "<<y<<endl;
	return 0;
}

void troca(int *a, int *b){//C
	int pivot = *a;
	*a = *b;
	*b = pivot;
}

void troca2(int &a,int &b){ //C++
	int pivot = a;
	a = b;
	b = pivot;
}