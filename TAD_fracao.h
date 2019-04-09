#ifndef FRACAO_H
#define FRACAO_H

using namespace std;

class Fracao{
private:
	int numerador;
	int denominador;
public:
	int getNumerador();
	void setNumerador(int num);
	int getDenominador();
	void setDenominador(int den);
	void multiplica(Fracao f1, Fracao f2);
	
};




#endif