#include<iostream>
using namespace std;

class Retangulo{
	private:
		int *x, *y;	//Colocamos x e y como ponteiro para que elese sejam acessados por todas as funções-membro da class
	public:
		Retangulo(int a, int b){
			x = new int;	//Se x e y não fossem ponteiros no private, não poderia ser alocado a memória no heap dessa forma
			y = new int;
			*x = a;
			*y = b;
		}
		
		~Retangulo(){
			delete x;	//Forma de deletar a memória dinâmica alocada aos ponteiros
			delete y;
		}
	
		int area(){return (*x) * (*y);}
};

int main(){
	Retangulo Ret(2,3);
	
	cout << "Area = " << Ret.area() << endl;
	
	return 0;
}