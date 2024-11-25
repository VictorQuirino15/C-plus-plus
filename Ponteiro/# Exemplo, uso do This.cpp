/*
EXEMPLO: USO DO THIS

Suponha que você tenha uma classe Pessoa com um membro nome, e um método setNome() que recebe um 
parâmetro nome para atribuir ao membro nome da classe. No entanto, você gostaria de usar o mesmo 
nome para o parâmetro e o membro da classe. Como você pode usar this para resolver esse problema?

Escreva o código para a classe Pessoa e a função setNome() que utiliza this para atribuir o valor 
do parâmetro ao membro da classe.
*/

#include<iostream>
#include<string>
using namespace std;

class Pessoa{
	private:
		string nome;
	public:
		void setNome(string nome){ this->nome = nome;}
		void mostrarNome(){ cout << "Diga o nome do individuo: " << this->nome;}
};

int main(){
	Pessoa gente;
	
	gente.setNome("Chibata");
	gente.mostrarNome();	//O operador '.' significa 'Acesso a membros de objetos' assim como a seta do this
	
	
	return 0;
}

/*
Em C++, this é um ponteiro implícito que aponta para o objeto atual. Ele é usado para acessar os membros de um 
objeto dentro de seus próprios métodos.A lógica por trás do uso do this é permitir que você se refira explicitamente 
ao objeto no qual o método está sendo chamado. Isso é útil quando você precisa distinguir entre variáveis de membro e 
parâmetros com o mesmo nome.
*/