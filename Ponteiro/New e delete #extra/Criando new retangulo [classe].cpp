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
int main () { 
	int i; 
	
	cout << "Quantos objetos retangulo deseja criar?" << endl; 
	cin >> i; 
	
	Retangulo *Ret= new Retangulo[i]; 
	for (int j = 0; j<i; j++) 
		cout << "Area" << "[" << j << "] = " << Ret[j].area() << endl; 
 
 	delete[] Ret; 
	return 0;
}