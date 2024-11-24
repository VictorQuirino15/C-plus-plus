#include <iostream>
using namespace std;

inline float soma(float n1, float n2){ return n1 + n2;}

int main(){
	float num1, num2;
	
	cout << "Digite 1 numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	cout << endl <<soma(num1, num2);
	
	return 0;
}

/*
O uso do inline é realmente necessário quando você tem uma função muito pequena e que 
é chamada várias vezes em um programa. Nesse caso, o inline instrui o compilador a substituir 
a chamada da função pelo corpo da função em si, o que pode economizar tempo de execução.
*/
