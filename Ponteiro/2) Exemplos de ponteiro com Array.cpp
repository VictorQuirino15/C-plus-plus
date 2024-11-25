#include <iostream>
using namespace std;

int main(){
	int lista[6] = {10, 20, 30, 40, 50, 60};
	
	cout << "Array" << endl;
	for(int i=0; i<6; i++){
		cout << lista[i] << endl;
	}
	
	cout << endl << "Array acessada por ponteiro" << endl;
	for(int i=0; i<6; i++){
		cout << *(lista+i) << endl;
	}
	
	int *p = lista;  // lista é um ponteiro
	
	cout << endl << "Array acessada por ponteiro de outra forma" << endl;
	for(int i=0; i<6; i++, p++){
		cout << *p << endl;
	}
	
	/*
	Ponteiros e Arrays são fortemente ligados em C++, pois
		▪Pode-se acessar qualquer elemento de uma array através de ponteiro.
		▪ O identificador de uma array é simplesmente um ponteiro.
	
	No último 'for', após imprimir o valor apontado por p, tanto i quanto p são incrementados. 
	Isso significa que o ponteiro p está avançando para apontar para o próximo elemento do array na próxima iteração.
	Por isso, tanto i quanto p são incrementados (...; i++, p++)
	*/
	
	return 0;
}