/*
Crie uma classe chamada Carro com os seguintes atributos: marca, modelo e ano. 
Implemente um construtor que inicialize esses atributos e um destrutor que apenas imprima "Carro destruído".
*/

#include<iostream>
#include<string>
using namespace std;

class Carro{
	private:
		string marca, modelo;
		int ano;
	public:
		void mostrar(){cout << "Marca: " << marca << endl << "Modelo: " << modelo << endl << "Ano: " << ano;}
		
		Carro (string marca, string modelo, int ano){
			this->marca = marca;
			this->modelo = modelo;
			this->ano = ano;
		}
		
		~Carro(){
			cout << endl << endl << "Carro destruido";
		}
};

int main(){
	string _marca, _modelo;
	int _ano;

	
	cout << "JEEP" << endl;
	cout << "Diga qual marca, modelo e ano eh o que queres:" << endl;
	cin >> _marca >> _modelo >> _ano;
	cout << endl;
	Carro carro(_marca, _modelo, _ano);

	
	cout << "Carro selecionado: " << endl;
	carro.mostrar();
	
	return 0;
}