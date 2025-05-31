#include<iostream>
using namespace std;

int main() {
        double P,PE,M;
        cout<<"Ingrese la pension educativa: ";
        cin>>PE;
        cout<<"Ingrese el promedio obtenido en el ultimo periodo: ";
        cin>>P;
        if (P>=0 && P<=20){
        if (P>=18){
                M=PE*0.7;
            cout<<"El monto a pagar es de: "<<M<< endl;
        }else{ M=PE*1.18;
            cout<<"El monto a pagar es de: "<<M<< endl;
              }
        } else {
		cout<<"ERROR, el promedio es incorrecto "<< endl; 
		}
		  
        return 0;
}
