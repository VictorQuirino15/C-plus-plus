//uso de funções: algo que pode ser feito fora do código e que possa ser reaproveitado em qualquer canto do código.
//Com a atualização e aprimoração dessas funções surgiram as bibliotecas, que são códigos de funções pré-definidas.
//A ideia da função também é poder dividir o código em partes de uma forma mais trabalhada.
//Protótipo da função: uma declaração de que ela existe antes de iniciar a rodar o código.
//Void não precisa retornar um valor. Ou seja, não precisa usar o 'return'.

#include<iostream>
#include<windows.h>
using namespace std;

int max(int,int);
int min(int,int);

int main(){
SetConsoleOutputCP(CP_UTF8);
int m, n;

	do{
		cout<<"------------------"<<endl<<"Digite 2 valores: "<<endl;
		cin>>m>>n;
		cout<<endl<<"O maior eh: "<<max(m,n)<<endl;
		cout<<"O menor eh: "<<min(m,n)<<endl;
	}
	while(m!=0);
	return 0;
}

int max(int x, int y){
	if(x<y) return y;
	else return x;
}

int min(int x, int y){
	if(x>y) return y;
	else return x;
}

//função de troca de variáveis:
// (...)
// int main(){
// 	int x = 4, y =7;
// (...)
// void troca1(int x, int y){
// 		int temp
//		temp = x;
//		x = y;
//		y = temp
//
// Como nesse caso foi usado um void (sem return) não será retornado a troca. Mas, basta usar uma função normal.