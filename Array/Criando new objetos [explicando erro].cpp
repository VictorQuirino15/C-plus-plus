#include <iostream> 
using namespace std; 

class Retangulo { 
		int x, y; 
	public: 
		void setar_valores(int a, int b){x=a; y=b;}
		Retangulo (){x = 5;y = 5;} 
		int area () {return x * y;} 
}; 


int main () { 
	int i, x1, y1; 
	
	cout << "Quantos objetos retangulo deseja criar? "; 
	cin >> i; 
	Retangulo *Ret= new Retangulo[i]; 
	
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	Ret[i].setar_valores(x1,y1);
	
	for (int j = 0; j < i; j++) 
		cout << "Area" << "[" << j << "] = " << Ret[j].area() << endl;  
		//Ret[j] não recebeu argumentos, logo ele vai receber os valores pre-definidos no construtor
		
		delete[] Ret; 
		return 0;
}