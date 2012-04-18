//Prueba de clases.

#include <iostream>
#include "racional.h"

using namespace std;



int main(){
	int num, den;
	Racional racional1=Racional(5);
	Racional racional2=Racional();
	cout << racional1.Devuelvenum();
	cout << racional2.Devuelvenum();
	cout << "Asigna un numerador " << endl;
	cin >> num;
	cout << "Asigna un denominador " << endl;
	cin >> den;
	
	
}
