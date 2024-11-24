#include <iostream> 
using namespace std; 

void imprimir(float[], const int); 
void intercambio(float& x, float& y); 
void ordenar (float[], const int); 

int main(){ 
	float a[10] = {25.5, 34.1, 27.6, 15.24, 3.27, 5.14, 6.21, 7.57, 4.61, 5.4}; 
	imprimir(a, 10); 
	ordenar(a, 10); 
	imprimir(a, 10); 
	
	return 0;
} 

//O 'const' garante que esse tamanho 'n' não mude mesmo com os próximos blocos de código
//			 (array, tamanho do array)
void imprimir(float a[], const int n)
{ 
	for(int i = 0; i < n; i++) 
		cout<< a[i] << " " << endl; 
	cout<< endl; 
} 

/*A função é void porque os valores são por referencia (endereço), 
logo vai mudar automaticamente em A[j] e A[j+1] em 'void ordenar' */
void intercambio(float& x, float& y) 
{ 
	float temp= x; 
	x = y; 
	y = temp; 
} 

void ordenar(float a[], const in tn){ 
	for(int i = n; i > 0; i--) //1º for
		for(int j = 0; j < i-1 ; j++) //2º for
			if(a[j] > a[j+1]) intercambio(a[j], a[j+1]); 
}

/*
ALGORITMO BOLHA:

2º for
faz as trocas comparando
varre a matriz após as comparações

5, 2, 1, 10 >> 2, 1, 5, 10

1º for
passa pro proximo elemento apos cada troca finalizada
depois do segundo 'for' fizer:
5, 2, 1, 10 >> 2, 1, 5, 10

ele passa pra próxima varredura e entra no segundo for de novo e faz:
2, 1, 5, 10 >> 1, 2, 5, 10


*/