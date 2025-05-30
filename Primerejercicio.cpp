#include<iostream>
using namespace std;

int main() {
	double C1,C2,C3,P;
	cout<<Ingrese la primera calificacion:  ;
	 cin>>C1;
	cout<<Ingrese la segunda calificacion: ;
	 cin>>C2;
	cout<<Ingrese la tercera calificacion: ;
	 cin>>C3;
	P=(C1+C2+C3)/3;
	cout<<El promedio es:<<P<<endl;
	if (P>=70){
		cout << Esta aprobado << endl;
	}else {
		cout<< Esta reprobado << endl;
	}
	return 0;	
}
