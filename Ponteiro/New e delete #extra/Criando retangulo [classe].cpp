#include <iostream> 
using namespace std;
 
class Retangulo { 
		int*x, *y; 
	public: 
		Retangulo (int a, int b); 
		~Retangulo (); 
		int area () {return (*x) * (*y);} 
}; 

// Função construtora da classe Retangulo 
Retangulo::Retangulo (int a, int b) {
	x = new int; 
	y = new int; 
	*x = a; 
	*y = b; 
} 

// Função destrutora da classe Retangulo 
Retangulo::~Retangulo () { 
	delete x; 
	delete y; 
} 

int main () 
{ 
	Retangulo Ret(3,4), Ret2(10,2); 
	
	cout<< "Area = "<< Ret.area() << endl; 
	cout<< "Area = "<< Ret2.area() << endl; 
	
	return 0; 
}