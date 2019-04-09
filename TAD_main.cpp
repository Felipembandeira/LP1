#include <iostream>
#include "fracao.h"

using namespace std;

int main(){


Fracao f1, f2, mult;

	f1.setNumerador(5);
	f1.setDenominador(4);

	f2.setNumerador(6);
	f2.setDenominador(3);

	mult.multiplica(f1, f2);




	return 0;
}