#include<iostream>
#include <string>
using namespace std;

int main() {
        double P,PE,M,D,A;
        string nombre;
        cout << "Ingresa el nombre o DNI del usuario: ";
        getline(cin, nombre);
        cout<<"Ingrese la pension educativa: ";
        cin>>PE;
        cout<<"Ingrese el promedio obtenido en el ultimo periodo: ";
        cin>>P;
        if (P>=0 && P<=20){
        if (P>=18){
                M=PE*0.7;
                D=PE-M;
            cout<<"El monto a pagar es de: "<<M<< endl;
            cout<<"Su descuento es de: "<<D<< endl;
        }else{ M=PE*1.18;
               A=M-PE;
            cout<<"El monto a pagar es de: "<<M<< endl;
            cout<<"Su aumento es de: "<<A<< endl;
              }
        } else {
		cout<<"ERROR, el promedio es incorrecto "<< endl; 
		}
		  
        return 0;
}
