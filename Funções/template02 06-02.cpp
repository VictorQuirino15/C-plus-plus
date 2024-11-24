#include <iostream> 
using namespace std; 

template <class tipo1, class tipo2> tipo1 produto(tipo1 x, tipo2 y){ return x*y;} 

int main(){ 
	int i = 3, j = 4; 
	float a = 6.1, b = 3.9; 
	
	cout<< " Chamada com tipos genericos int: " << produto(i, b) << endl; 
	cout<< " Chamada com tipos genericos float: " << produto(a, j) << endl; 
	
	}