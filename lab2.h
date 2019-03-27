#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef LAB2_H
#define LAB2_H

class Funcionario{
	private:
		string nome_funcionario;
		float salario;
		int dia_data_admissao; 
		int mes_data_admissao; 
		int ano_data_admissao; 


	public:
		//Funcionario (string nomefunc, float sal, int data_adm);

		string getNomefunc();
		void setNomefunc(string nomefunc);

		float getSalario();
		void setSalario(float sal);

		int getDataAdm();
		void setDataAdm(int d, int m, int a);

		void Entradadadosfuncionais();
		void Saidadadosfuncionais();



};




class Empresa{
	private:
		string nome_empresa;
		string CNPJ;
		string lista_funcionarios; 

	public:
		//Empresa (string nomeemp, float cnpj, string lista_func);

		string getNomeEmp();
		void setNomeEmp(string nomeemp);

		string getCNPJ();
		void setCNPJ(string cnpj);
		
		string getListaFunc();
		void setListaFunc(string lista_func);

};



#endif
