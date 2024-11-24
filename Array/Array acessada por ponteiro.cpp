#include <iostream>
using namespace std;

int main(){
	int lista[5] = {25, 34, 52, 74, 60};
	int *p = lista; // lista é um ponteiro
	
	cout << "Array" << endl;
	for(int i = 0; i < 5; i++)
		cout << lista[i] << endl;
		
	cout << endl << "Array acessada por ponteiro" << endl;
	for(int i = 0; i < 5; i++){
		cout << *p << endl;
		p++;
	}
	p-=5; // Nesse caso precisa colocar isso devido o incremento. 
	//Como o incremento passa da quantidade de elementos no vetor, sem isso ele passa pra próxima posição que é 0
	
	cout << endl << "valor de *p: " << endl << *p;
	return 0;
}
