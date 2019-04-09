#include <iostream>
#include "fracao.h"

using namespace std;

	int Fracao::getNumerador(){
		return numerador;
	}

	void Fracao::setNumerador(int num){
		numerador=num;
	}
	
	int Fracao::getDenominador(){
		return denominador;
	}

	void Fracao::setDenominador(int den){
		denominador=den;
	}

	void Fracao::multiplica(Fracao f1, Fracao f2){

	int n,d;
	n = f1.getNumerador()*f2.getNumerador();
	d = f1.getDenominador()*f2.getDenominador();

	cout << "Multiplicao de fracoes = " << n << "/" << d << endl;

	}

