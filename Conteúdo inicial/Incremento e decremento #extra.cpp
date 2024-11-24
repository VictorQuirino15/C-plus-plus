#include<iostream>
#include<cmath>
using namespace std;

int main () {
	int y, x = 3;
	
	y = ++x * x--;	//Primeiro incrementa x em 1 e depois multiplica por x. Só após isso, decrementa x em 1
	cout << x << endl;
	cout << y << endl;
		
}