#include<iostream>
using namespace std;

int soma (int, int);

int main(){
	int X = 1, Y = 3;
	
	int Z = soma(X, Y);
	cout <<"valor da soma: "<< Z;
	return 0;
}

int soma(int a, int b){
return a + b;
}
