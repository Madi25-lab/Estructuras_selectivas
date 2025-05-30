#include<iostream>
#include <string>
using namespace std;

int main() {
string nombre;
double C1,C2,C3,P;
 cout << "Ingresa el nombre del estudiante: ";
  getline(cin, nombre);
	cout<<"Ingrese la primera calificacion: " ;
	 cin>>C1;
	cout<<"Ingrese la segunda calificacion: ";
	 cin>>C2;
	cout<<"Ingrese la tercera calificacion: ";
	 cin>>C3;
	P=(C1+C2+C3)/3;
	if (P>=70){
			cout <<nombre << endl;
		cout << "Se encuentra aprobado "<< P << endl;
	}else {
		cout <<nombre << endl;
		cout<< "Se encuentra reprobado "<<P<< endl;
	}
	return 0;	
}

