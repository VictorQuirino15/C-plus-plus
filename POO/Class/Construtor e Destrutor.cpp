#include<iostream>
using namespace std;

class Retangulo{
		int x, y;
	public:
		void setar_valores(int, int);
		void mostrar_valores(){cout<< "x: " << x << " y: " << y;} 
		int area(){return x*y;} 
		
		//Construtor da classe Retangulo. Não deve ter retorno (int, float, void...)
		Retangulo(int a, int b){
			x = a;
			y = b;
		}	
		
		//Sobrecarga do construtor Retangulo
		Retangulo(){
			x = 2;
			y = 4;
		}
		
		//Destrutor. Ele destroi os objetos(espaço na memória) antes do return 0, para assim limpar o espaço na memória
		~Retangulo(){
			cout << "Objeto destruido" << endl;
		}
};

void Retangulo::setar_valores(int a, int b){
	x = a; 
	y = b;	
}

int main(){
	int x1, y1;
	Retangulo Ret1;		 //Ret1 vai usar os valores/argumentos setados pelo usuario (x1, y1)
	Retangulo Ret2(2,3); //Ret2 vai usar os valores setados aqui, jogados para o construtor (2,3)
	Retangulo Ret3;		 //Ret3 vai usar os valores da sobrecarga (2, 4), pois não foi setado algum valor para ele
	
	cout << "Digite x1: ";
	cin >> x1;
	cout << "Digite y1: ";
	cin >> y1;
	
	Ret1.setar_valores(x1, y1); 
	cout << endl ;
	
	//Ao instanciar um objeto, ele automaticamente chama o construtor (o construtor chamado vai depender do que foi setado ao objeto)
	cout << "Area de Ret1: " << Ret1.area() << endl; 
	cout << "Area de Ret2: " << Ret2.area() << endl;
	cout << "Area de Ret3: " << Ret3.area() << endl;  da sobrecarga
	
	cout << endl << "Valores de Ret1: ";
	Ret1.mostrar_valores();
	cout << endl << "Valores de Ret2: ";
	Ret2.mostrar_valores();
	cout << endl << "Valores de Ret3: ";
	Ret3.mostrar_valores();
	cout << endl << endl;
	
	delet Ret, Ret2;
	return 0;
}

/*

O destrutor também pode ser usado de outras formas, tudo depende de como você está usando os demais aspectos
dentro da class. Por exemplo, para usar o destrutor da seguinte forma, você precisa alocar dinamicamente as variáveis
no qual vai usar o 'delete'.

	~Retangulo(){
		delete x;
		delete y;
	}
	
Outra forma de uso do destrutor é usando o "delete (nome do objeto criado)" ao final do código. Mas Para usar um 
destrutor que libera a memória alocada dinamicamente, você precisa alocar memória dinamicamente usando new. (esse último conceito tem que ser revisto)
Exemplo:

...
	delete Ret;
	return 0;
*/