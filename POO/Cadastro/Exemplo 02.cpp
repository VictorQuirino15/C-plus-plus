#include<iostream>
#include<string>
#include<vector>
using namespace std;
//Questão escrita após o final do código
class Pessoa{
	private:
		
	public:
		string nome;
		int idade;
		float altura;
		
	Pessoa(string n, int i, float a) : nome(n), idade(i), altura(a) {} //Construtor	
};

int main(){
	string nome;
	int idade;
	float altura;
	char c;
	vector<Pessoa> pessoas;
	
	do{
		cout << "CADASTRO DE DADOS" << endl;
	
		cout << "Digite o  nome: ";
		cin.ignore();
		getline(cin, nome);
		
		cout << "Digite a idade: ";
		cin >> idade;
		
		cout << "Digite a altura em metros: ";
		cin >> altura;
		
		pessoas.push_back(Pessoa(nome, idade, altura));
		cout << endl << "Deseja fazer mais um cadastro? [s/n]" << endl;	
		cin >> c;
	
	} while(c == 's' ||  c == 'S');
	
	cout << endl << "DADOS CADASTRADOS" << endl;
	for(const auto &person : pessoas){
		cout << endl;
		cout << "Nome: " << person.nome << endl;
		cout << "Idade: " << person.idade << endl;
		cout << "Altura: " << person.altura << endl;
	}
	
	return 0;
}

/*
Questão:

Você precisa desenvolver um programa em C++ para cadastrar informações de pessoas. 
Cada pessoa terá nome, idade e altura. O programa deve permitir o cadastro de várias 
pessoas e, ao final, exibir os dados cadastrados.

Instruções:

1)	Crie uma classe Pessoa com os seguintes atributos:
	nome (string)
	idade (int)
	altura (float)
	
2)	Implemente um construtor para a classe Pessoa para inicializar os atributos.
	
3)	No programa principal:
	Utilize um vetor para armazenar as pessoas cadastradas.
	Utilize um loop para permitir o cadastro de várias pessoas.
	Ao final do cadastro, exiba os dados cadastrados.
	
4)	Requisitos adicionais:
	O programa deve solicitar nome, idade e altura de cada pessoa.
	O programa deve permitir que o usuário decida se deseja cadastrar mais pessoas.
*/