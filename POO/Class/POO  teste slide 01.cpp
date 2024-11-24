#include <iostream> 
using namespace std; 

class Retangulo{ 
		int x, y; 
	public: 
		void setar_valores(int, int); 
		int area() {return(x*y);} 
		void mostrar () { cout<< "x = " << x << " y = " << y; } 
		void set_x(int a) {x=a;}
		int get_x(){return x;}
		
	};
		void Retangulo::setar_valores(int a, int b) { 
			x = a; 
			y = b; 
	} 
			
int main() { 
	Retangulo Ret; 
	Ret.setar_valores(3, 4); 
	cout<< "Area = " << Ret.area() << endl; 
	Ret.mostrar();
	Ret.set_x(10);
	Ret.get_x();
	
	return 0; 
	}