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
		
		Carro(string n, string m, int a) : marca(n), modelo(m), ano(a) {}
		
		~Carro(){
			cout << endl << "Carro destruido.";
		}
		
		void mostrar(){
			cout << "Marca: " << marca << endl;
			cout << "Modelo: " << modelo << endl;
			cout << "Ano: " << ano << endl;
		}
};

int main(){
	string marca, modelo;
	int ano;
	
	cout << "Digite a marca: ";
	cin >> marca;
	cout << "Digite o modelo: ";
	cin >> modelo;
	cout << "Digite o ano: ";
	cin >> ano;
	Carro car(marca, modelo, ano);
	
	cout << endl << endl;
	car.mostrar();
	
	return 0;
}