#include <iostream> 
using namespace std; 

#define TAM 100 
void lerArray(double [], int&); 
void imprimirArray(const double [], const int); 

int main()
{ 
	int n; 
	double a[TAM]; 
	lerArray(a, n); 
	cout << endl << "A array tem " << n << " elementos:\n"; 
	imprimirArray(a, n); return 0; 
} 

void lerArray(double x[], int& n)
{ 
	cout <<"Digite os valores. Digite 0 para finalizar: \n"; 
	for(n=0;n < TAM;n++){ 
		cout<< n << ":"; 
		cin >> x[n]; 
		if(x[n] == 0) break; 
	} 	
} 

void imprimirArray(const double y[], const int n){ 
	for(int i=0; i < n; i++) 
		cout << i << ":\t" << y[i] << endl; // "\t" dá um tab
}