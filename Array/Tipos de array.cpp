#include<iostream>
using namespace std;

int main(){
	int numero[6] = {10, 20, 30, 40, 50, 60}; //Tipo int aloca 4 bites de memoria cada
	int n[] = {3, 4, 5};
	char c[] = {'U', 'F', 'P', 'B'}; //Tipo char aloca 1 bite de memoria cada
	char s[] = {"UFPB"}; 
/*
As "" indica que é uma STRING e após o último char ele coloca um símbolo \0 que manda 
esse recado pro computador avisando isso, logo aumenta em 1 bite o armazenamento
*/
	for(int i=0; i<6; i++){
		cout << numero[i] << " ";
	}
	cout << endl;
	
	for(int i=0; i<6; i++){
		cout << n[i] << " ";
	}
	
	cout << endl << c << endl;
	cout << s ;	
}