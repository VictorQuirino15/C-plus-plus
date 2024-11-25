#include <iostream>
using namespace std;
int main () {
	int x;
	float n;
	int& y = x;
	float& m = n;	//Aqui eu digo que o endereço de m recebe o valor de n (mais explicações no final do código)
	
	x = 8;
	cout << endl;
	cout << "x = " << x << endl;
	cout << "Referencia de x= " << y << endl;
	
	y = 5;
	cout << endl;
	cout << "x = " << x << endl;
	cout << "Referencia de x = " << y << endl;
	
	n = 2.4;
	cout << endl;
	cout << "m = " << m << endl;
	cout << "Referencia de m = " << m << endl;
	
	m = 55.6;
	cout << endl;
	cout << "m = " << m << endl;
	cout << "Referencia de m = " << m << endl;
	
	return 0;
}

/*
float& m = n;

Ao fazer isso, atribui-se ao endereço de m, o valor que n carrega. Ou seja, naquele endereço de memória que
m possui no computador, agora está armazenando o valor dado em n

	Se n = 10
	Agora o endereço de m tem o valor 10 armazenado nele
*/