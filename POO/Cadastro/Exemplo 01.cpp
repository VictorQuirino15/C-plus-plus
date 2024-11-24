#include<iostream>
#include<string>
using namespace std;

class Pessoa{
	public:
		string nome;
		int idade;
		float altura;
};

int main(){
	Pessoa person;
	
	cout << "Digite o nome: " << person.nome;
	getline(cin, person.nome);
	
	cout << "Digite a idade: ";
	cin >> person.idade;
	
	cout << "Digite a altura em metros: ";
	cin >> person.altura;
	
	cout << endl << "DADOS CADASTRADOS:" << endl;
	cout << "Nome: " << person.nome << endl;
	cout << "Idade: " << person.idade << endl;
	cout << "Altura: " << person.altura << endl;
	
	return 0;
}