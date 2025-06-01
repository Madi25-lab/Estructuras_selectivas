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
	 if (C1>=0 && C1<=100){
	cout<<"Ingrese la segunda calificacion: ";
	 cin>>C2;
	 if (C2>=0 && C2<=100){
	cout<<"Ingrese la tercera calificacion: ";
	 cin>>C3;
	 if (C3>=0 && C3<=100){
	P=(C1+C2+C3)/3;
	if (P>=70){
			cout <<nombre << endl;
		cout << "Se encuentra aprobado su promedio es: "<< P << endl;
	}else {
		cout <<nombre << endl;
		cout<< "Se encuentra reprobado su promedio es: "<<P<< endl;
	}
	}else {
	cout<< "La nota es incorrecta debe estar entre 0 y 100 "<< endl;
    }
	}else {
	cout<< "La nota es incorrecta debe estar entre 0 y 100"<< endl;
    }
    }else {
	cout<< "La nota es incorrecta debe estar entre 0 y 100"<< endl;
    }
	return 0;
}

