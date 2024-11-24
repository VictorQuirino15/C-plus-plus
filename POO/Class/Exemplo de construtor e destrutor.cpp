#include<iostream>
using namespace std;

class Retangulo{
	private:
		int x, y;
	public:
		void setValores(int a, int b){x=a; y=b;}	//Valores setados na função da class
		void setConstrutor(int, int);				//Valores setados no construtor
		int getX(){return x;}
		int getY(){return y;}
		void mostrarValores(){cout << "x: " << x << ", y: " << y;}
		int area(){return x*y;}
		
		Retangulo(int a, int b){
			x = a;
			y = b;
		}
		
		Retangulo(){
			x = 1;
			y = 1;
		}
		
		~Retangulo(){
			cout  << endl << "Objeto destruido. Valor do objeto: ";
		}
};

int main(){
	int x1, y1;
	
	Retangulo Ret1(x1,y1);
	Retangulo Ret2(2,3);
	Retangulo Ret3;
	
	cout << "1) Setando valores para Ret1" << endl;
	cout << "Digite x1: ";
	cin >> x1;
	cout << "Digite y1: ";
	cin >> y1;
	Ret1.setValores(x1,y1);
	
	cout << endl << "2) Valores mostrados de forma separada" << endl;
	cout << "Valor de x de Ret1: " << Ret1.getX() << endl;
	cout << "Valor de y de Ret1: " << Ret1.getY() << endl;
	
	cout << endl << "3) Printando todos os valores juntos";
	cout << endl << "Valores de Ret1: ";
	Ret1.mostrarValores();
	cout << endl << "Valores de Ret2: ";
	Ret2.mostrarValores();
	cout << endl << "Valores de Ret3: ";
	Ret3.mostrarValores();
	cout << endl;
	
	cout << endl << "4) Printando as areas";
	cout << endl << "Area de Ret1: " << Ret1.area();
	cout << endl << "Area de Ret2: " << Ret2.area();
	cout << endl << "Area de Ret3: " << Ret3.area();
	
	cout << endl << endl << "5) Destruindo os objetos";
	
	return 0;
}