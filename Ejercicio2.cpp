#include<iostream>
using namespace std;

int main() {
	double P,N,PP;
	cout<<El precio de compra es:  ;
	 cin >> P;
	cout<<Escoja un numero al azar:  ;
	 cin >> N;
	if (N<74){
		PP=P*0.85;
		cout << El precio a pagar es:<<PP << endl;
	}else { PP=P*0.8;
		cout << El precio a pagar es:<<PP << endl;
	}
	return 0;	
}
