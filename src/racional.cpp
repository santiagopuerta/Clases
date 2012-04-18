#include "racional.h"
#include <iostream>

using namespace std;

Racional::Racional(){
	numerador=0;
	denominador=1;
}

Racional::Racional(int num){
	numerador=num;
	denominador=1;
}

Racional::Racional(int num, int den){
	numerador=num;
	denominador=den;
}

int Racional::Devuelvenum() const{
	return numerador;
}
