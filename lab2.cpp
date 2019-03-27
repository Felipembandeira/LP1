#include <iostream>
#include <string>
#include <vector>
#include "lab2.h"

using namespace std;

//Funcionario



string Funcionario::getNomefunc() {
	return nome_funcionario;
}
void Funcionario::setNomefunc(string nomefunc) {
	nome_funcionario = nomefunc;
}

float Funcionario::getSalario() {
	return salario;
}
void Funcionario::setSalario(float sal) {
	salario = sal;
}

int Funcionario::getDataAdm() {//Está errado! Falta retornar a data!
	return dia_data_admissao;
}
void Funcionario::setDataAdm(int d, int m, int a) {
	if (d >= 1 && d <= 31) 
		dia_data_admissao = d; 
	if (m >= 1 && m <= 12)
		mes_data_admissao = m; 
	if (a >= 1 && a <= 9999)
		ano_data_admissao = a; 
}


void Funcionario::Entradadadosfuncionais(){

	cout << "Cadastre o nome do funcionario, salario e data de admissao" << endl;
	string nomefunc;
    getline(cin, nomefunc);
    setNomefunc(nomefunc);

    cout << "Cadastre o salario do funcionario" << endl;
    float sal;
    cin >> sal;
    setSalario(sal);

    cout << "Cadastre a data de admissao do funcionario" << endl;
    int dia_adm, mes_adm, ano_adm;
    cin >> dia_adm;
    cin >> mes_adm;
    cin >> ano_adm;
	setDataAdm(dia_adm, mes_adm, ano_adm);//data de admissão
	cin.get();


}

void Funcionario::Saidadadosfuncionais(){

cout << "Funcionario: " << getNomefunc() << endl;
cout << "Salario : " << getSalario() << endl;
cout << "Data Admissao: " << getDataAdm() << endl;
}









//Empresa




string Empresa::getNomeEmp() {
	return nome_empresa;
}
void Empresa::setNomeEmp(string nomeemp) {
	nome_empresa = nomeemp;
}

string Empresa::getCNPJ() {
	return CNPJ;
}
void Empresa::setCNPJ(string cnpj) {
	CNPJ = cnpj;
}

string Empresa::getListaFunc() {
	return lista_funcionarios;
}
void Empresa::setListaFunc(string lista_func) {
	lista_funcionarios = lista_func;
}


//Utilitarios

