#include <iostream> 
using namespace std;
 
class Retangulo { 
		int *x, *y; 
	public: 
		void setar_valores(int, int);
		Retangulo(){}
		Retangulo (int a, int b); 
		~Retangulo (); 
		int area () {return (*x) * (*y);} 
}; 

void Retangulo::setar_valores(int base, int comprimento) {
	x = new int;
	*x = base; 
	y = new int; 
	*y = comprimento;
	} 

// Função construtora da classe Retangulo 
Retangulo::Retangulo (int a, int b) {	//Construtor::classe
	x = new int; 
	y = new int; 
	*x = a; 
	*y = b; 
} 

// Função destrutora da classe Retangulo 
Retangulo::~Retangulo () {	//Destrutor::classe
	delete x; 
	delete y; 
} 

int main () 
{ 
	int i, j, base, comprimento;
	
	
	cout << "Digite quantos retangulos deseja criar: ";
	cin >> i;
	Retangulo *Ret = new Retangulo[i];
	cout << endl;
	
	for (j=0; j<i; j++)
	{
		cout << "Digite a base do retangulo[" << j << "]: ";
		cin >> base;
		cout << "Digite o comprimento do retagulo[" << j << "]: ";
		cin >> comprimento;
		Ret[j].setar_valores(base, comprimento);
		cout << endl;
	}
	
	for (j=0; j<i; j++)
	{
		cout << "Area[" << j << "] = " << Ret[j].area() << endl; 
	}
	
	return 0; 
}