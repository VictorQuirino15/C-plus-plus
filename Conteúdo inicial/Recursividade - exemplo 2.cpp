#include <iostream>
using namespace std;

int multiplicacao(int n1, int n2){
	int soma = 0;
	for(int i=0; i<n2; i++){
		soma += n1;
	} return soma;
}

int main(){
	int num1, num2;
	
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	
	cout << "Multiplicacao num1 * num2 = " << multiplicacao(num1, num2);
	
	return 0;
}