#include<iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
	double P,N,PP,D, M,V;
	cout << "Nombre o DNI del comprador: ";
    getline(cin, nombre);
	cout<<"El precio de compra es: " ;
	 cin >> P;
	cout<<"Escoja un numero al azar: " ;
	 cin >> N;
	if (N>=1){
	if (N<74){
		D=P*0.15;
		PP=P-D;
		cout <<nombre << endl;
		cout << "El precio a pagar es: "<<PP << endl;
		cout << "Su descuento fue de: "<<D << endl;
	}else { 
	    D=P*0.20;
		PP=P-D;
		cout <<nombre << endl;
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


