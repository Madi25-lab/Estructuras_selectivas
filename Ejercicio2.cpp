#include<iostream>
using namespace std;

int main() {
	double P,N,PP,D, M,V;
	cout<<"El precio de compra es: " ;
	 cin >> P;
	cout<<"Escoja un numero al azar: " ;
	 cin >> N;
	if (N>=1){
	if (N<74){
		D=P*0.15;
		PP=P-D;
		cout << "El precio a pagar es: "<<PP << endl;
		cout << "Su descuento fue de: "<<D << endl;
	}else { 
	    D=P*0.20;
		PP=P-D;
		cout << "El precio a pagar es: "<<PP << endl;
		cout << "Su descuento fue de: "<<D << endl;
	}
	cout<<"Con cuanto pagara: " ;
	cin>> M;
	V=M-PP;
	cout<<"Su vuelto es: " <<V << endl;;
    }else {
	cout<< "El numero debe ser positivo" <<endl;
    }
	return 0;	
}
