#include <iostream> 
using namespace std; 

int BuscaSeq(int[], int); 

int main()
{ 
	int b,r; 
	int a[10] = {15, 41, 76, 64, 97, 33, 82, 18, 9, 48}; 

	cout<< "Digite o valor a ser busca na lista: "; 
	cin>> b; 
	r = BuscaSeq(a, b); 
	
	if(r == -1) 
		cout<< "Valor nao encontrado" << endl; 
	else cout<< "Indice = " << r << " e valor " << a[r] << endl; 
	
	return 0; 
}

int BuscaSeq(int A[], int b, int TAM)
{ 
	enum{FALSE, TRUE}; 
	int ENCONTRADO = FALSE; 
	int i = 0; 
	while( !ENCONTRADO && (i < TAM)) 
	{ 
		if(A[i] == b) 
			ENCONTRADO = TRUE; 
		else i++; 
	}
		
	if(ENCONTRADO == TRUE) 
		return i; 
	else 
		return -1; 
}