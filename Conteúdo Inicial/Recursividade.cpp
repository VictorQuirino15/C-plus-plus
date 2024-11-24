#include<iostream>
using namespace std;

int fatorial(int n){
	if(n == 0){
		return 1;
	}else{
		return n * fatorial(n-1);	// 3 * fatorial(3-1) = 2 * fatorial(2-1) = 1 * fatorial (1-1) = 1 
	}
}

int main(){
	int num;
	
	cout << "Digite um numero: ";
	cin >> num;
	cout << endl << "O fatorial de " << num << ": " << fatorial(num);
	
	return 0;
}

/*
A recursividade é um conceito importante em programação onde uma função chama a si mesma. Em C++, 
isso nos permite resolver problemas de forma elegante, especialmente problemas que podem ser divididos 
em subproblemas semelhantes.

Uma função recursiva deve ter uma condição de parada, chamada de caso base, 
para evitar que a função entre em um loop infinito. Além disso, a função deve ser capaz de dividir o 
problema em instâncias menores do mesmo problema.
*/