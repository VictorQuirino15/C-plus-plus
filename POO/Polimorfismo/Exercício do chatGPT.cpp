/*
Suponha que você esteja desenvolvendo um sistema para modelar diferentes formas geométricas em C++. 
Você decidiu criar uma classe base chamada Forma e duas classes derivadas, Retangulo e Circulo, que 
representam formas geométricas específicas.

Você deseja calcular a área de cada forma geométrica e decidiu usar funções virtuais e override para 
garantir que cada classe derivada implemente sua própria versão do método calcularArea(). Escreva as 
classes Forma, Retangulo e Circulo em C++ e implemente o método calcularArea() em cada classe derivada 
usando funções virtuais e override.
*/
#include<iostream>
using namespace std;

class Forma{
	public:
		virtual double calcularArea() const = 0;	//Explicação do const = 0 ao final do código
};

class Retangulo : public Forma{
	private:
		double base, comprimento;
	public:
		Retangulo(double b, double c) : base(b), comprimento(c) {}
		double calcularArea() const override {return base*comprimento;}	
		//O const antes do override é indicar que essas funções não modificam os membros de dados das classes. Sem ele, dá erro
};

class Circulo : public Forma{
	private:
		double raio;
	public:
		Circulo(double r) : raio(r) {}
		double calcularArea() const override {return 3.14*raio*raio;}
};

int main(){
	double base, comprimento, raio;
	int geometria;
	
	cout << "Calcular area de [1- Retangulo, 2- Circulo]" << endl << "Escolha a geometria: ";
	cin >> geometria;
	cout << endl;
	
	if(geometria == 1){
		cout << "Digite a base: ";
		cin >> base;
		cout << "Digite o comprimento: ";
		cin >> comprimento;
		Retangulo ret(base, comprimento);
		cout << "Area do retangulo: " << ret.calcularArea();
	}
	else if(geometria == 2){
		cout << "Digite o raio: ";
		cin >> raio;
		Circulo circ(raio);
		cout << "Area do circulo: " << circ.calcularArea();
	}
	
	return 0;
}

/*
Uma função virtual pura é uma função virtual que não possui uma implementação na classe base e é 
marcada com = 0. Isso significa que as classes derivadas devem fornecer uma implementação para essa 
função ou também serão consideradas classes abstratas e não poderão ser instanciadas.
*/