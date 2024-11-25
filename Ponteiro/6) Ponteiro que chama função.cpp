#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int * aleatorio(void);

int main () {
	int *P;
	P = aleatorio();
	
	cout << endl;
	for ( int i = 0; i < 10; i++ ) {
		cout << "*(P + " << i << "): " << *(P + i) << endl;
	 }
		return 0;
}

	int* aleatorio( ) {
		static int x[10];
		// Inicializando a SEED com o tempo atual.
		srand( (unsigned)time( NULL ) );	//srand é uma função que retorna valores aleatórios ao usuário.
		
		for (int i = 0; i < 10; ++i) {
			x[i] = rand()%100; 		//Como rand() está sendo limitada a 2 algarismos "%100" devido os 2 zeros, os números que aparecem são de 0 a 99	
			cout << x[i] << endl;
		}
		 return x;
	}
	
/*
Esse exemplo a seguir é melhor de entender, caso o srand tenha deixado confusões:

#include <iostream>
#include <ctime>
using namespace std;

int* dobrar();

int main () {
    int *P;
    P = dobrar();
     
    for (int i = 0; i < 10; i++) {
        cout << "*(P + " << i << ") : " << *(P + i) << endl;
    }
    return 0;
}

int* dobrar() {
    static int x[10];
    
    for (int i = 0; i < 10; ++i) {
        x[i] = (i + 1) * 2; // Dobrando o valor de i = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    }
    return x;
}

*/