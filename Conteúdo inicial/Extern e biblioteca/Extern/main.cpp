#include <iostream>
#include "funcoes.h"
using namespace std;

int main() {
	
	escreve();
	
	return 0;
}

/*
referências: https://terminalroot.com.br/2021/04/significado-de-extern-em-cpp.html

O uso do especificador 'extern' é usado para variáveis e funções (exceto membros de classe ou parâmetros 
de função). Isso é útil quando você tem variáveis globais e declara a existência delas em um cabeçalho, 
de forma que cada arquivo de origem que inclui o cabeçalho saiba sobre ele, mas você só precisa “defini-lo” 
uma vez em um de seus arquivos de origem. Neste projeto, foram usados 3 arquivos para testar como seria
usar 3 ao invés de apenas 2. Como um exemplo mais simples, digamos que você tenha 2 arquivos: main.cpp e funcoes.h

EXEMPLO

arquivo 1: main.cpp

#include "funcoes.h" // inclui o arquivo de onde você vai usar a variável/função

int main(){
	numero = 20;	// declara a variável externa como 20
	escreve() 		// chama a função criada no arquivo 'funcoes.h'
}

arquivo 2: funcoes.h	//Tem que ser ".h", se não for assim, dá erro.

#ifndef FUNCOES_H	// "if not define FUNCOES_H" (se não definido)
#define FUNCOES_H	// Definindo o arquivo como biblioteca

extern int numero;

void escreve(){
	cout << numero;
}
#endif 				// Indica o final da biblioteca iniciada por #ifndef.


*/