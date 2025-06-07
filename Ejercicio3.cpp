#include<iostream>
#include <string>
using namespace std;

int main(){
double P, PE, M, D, A;

cout << "=============================================" << endl;
cout << "BIENVENIDO A MI PROGRAMA!" << endl;

string nombre;
cout << "Ingresa su NOMBRE COMPLETO porfavor: " << endl;
getline(cin, nombre);

cout<<"Ingrese el monto de la pension educativa: " << endl;
cin>>PE;

cout<<"Ingrese el promedio academico obtenido en el ultimo periodo: " << endl;
cin>>P;

  if (P >= 0 && P <= 20) {
        cout << "Hola, " << nombre << "." << endl;

        if (P >= 18) {
            M = PE * 0.7;
            D = PE - M;
            cout << "El monto a pagar con descuento es: S/. " << M << endl;
            cout << "y el descuento aplicado fue de: S/. " << D << endl;
        } else {
            M = PE * 1.18;
            A = M - PE;
            cout << "El monto a pagar con aumento es: S/ " << M << endl;
            cout << "Aumento aplicado: S/ " << A << endl;
        }
    } else {
        cout << "ERROR: El promedio ingresado es incorrecto." << endl;
    }

    cout << "\n GRACIAS POR USAR MI PROGRAMA <3!";
    return 0;
}
