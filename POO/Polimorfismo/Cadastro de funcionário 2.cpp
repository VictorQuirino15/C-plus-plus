#include<iostream>
#include<vector>
using namespace std;

// Definição da classe base Funcionario
class Funcionario{
	protected:
		string nome;
		int id;
		float salario;
		
	public:
		// Construtor da classe Funcionario
		Funcionario(string _nome, int _id, float _salario) : nome(_nome), id(_id), salario(_salario) {}
		
		// Métodos para acesso aos atributos
		string getNome(){ return nome;}
		int getId(){return id;}
		float getSalario() {return salario;}
		
		// Métodos para aumentar o salário em porcentagem específica
		void aumentarSalario(float percentual){
			salario *= (1 + percentual / 100);
		}
		
		// Método virtual para exibir informações do funcionário
		virtual void exibirInformacoes(){
			cout << "Nome: " << nome << ", Id: " << id << ", Salario: " << salario << ", Departamento: " << departamento;
		}
};

// Definição da classe derivada Gerente
class Gerente : public funcionario{
	
};