#include <iostream>
using namespace std;

void resultado1(void);
void resultado2(void);

int main(){
	
	cout << "Com o uso de static: ";
	for (int i=1 ; i<5 ; i++){
		resultado1();
	}
	 
	cout << endl << endl << "Sem o uso de static: ";
	for (int i=1 ; i<5 ; i++){
		resultado2();
	}
}
	
	void resultado1(void){	// Quando static é usado em uma variável dentro de uma função, 
		static int j = 1;	// a variável mantém seu valor entre chamadas da função.
		cout << j++;		// Nesse exemplo: ao sair da função, 'j' continua com o valor após o incremento
	}
	
	void resultado2(void){
		int j = 1;			// Nesse exemplo, como em funções, as variáveis são locais, ao sair as variáveis
		cout << j++;		// voltam ao valor inicial. No caso, aqui ao invés de sempre incrementar, retorna a 1 toda 
	}						// vez que sai e volta para esta função
	
	
/*
O static pode ser usado de várias formas:
- variáveis estáticas (dentro de funções principalmente, que é o usado neste código)
- variáveis globais
- funções estáticas

Uma função estática é uma função que é visível apenas no arquivo onde foi definida. Isso significa que a função só 
pode ser chamada dentro desse arquivo.
*/
	

