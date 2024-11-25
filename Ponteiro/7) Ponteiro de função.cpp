#include <iostream>
using namespace std;

int exemplo(int i, int j);

int main () {
	int i = 3, j = 4, (*p)(int,int);
	p = &exemplo;
	
	cout << (*p)(12,45) << endl;	//Chama a função e bota 12 e 45 como parâmetro
	cout << (*p)(i,j) << endl;
}

int exemplo(int i, int j){
	return i * i * j;
}

/*
Ao chamar o ponteiro que aponta para uma função, chamamos a função que ele aponta e colocamos como parâmetros
da função os valores nos parênteses a seguir

Vejamos: 
	12*12*45 = 6480
	3*3*4 = 36
*/