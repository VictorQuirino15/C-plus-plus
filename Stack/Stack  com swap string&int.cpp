#include<iostream>
#include<stack> //Biblioteca usada para usar a estrutura da pilha
using namespace std;

int main()
{
	
	stack <string> cartas;
	//stack <tipo dos elementos> nome da pilha/stack
	
	cartas.push("Rei de copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	//Adicionamos 4 cartas a pilhas com o comando ".push" de POO
	//A primeira carta, a do topo, é a do Rei de copas
	
	if(cartas.empty()) { 
	   cout << "Pilha vazia" << endl << endl;
	}else{
	 cout << "Pilha com cartas" << endl << endl;
	}
	//Verificamos se a pilha está vazia ou não com o método "empty()"
	
	cout << "Tamanho: " << cartas.size() << endl;
	cout << "carta do topo: " << cartas.top() << endl << endl;
	//Mostra-se o tamanho atual e pede-se a carta do topo com os métodos "size()" e "top()" respectivamente
	
	cartas.pop();
	cartas.pop();
	//Retiram-se 2 elementos da pilha com o método "pop()"
	
	cout << "Tamanho: " << cartas.size() << endl;
	cout << "Nova carta do topo: " << cartas.top() << endl << endl;
	//Mostra o tamanho e o elemento do topo após a alteração na pilha
	
	while(!cartas.empty()) {
	 cartas.pop();
	}
	//Comando while utilizado para retirar elementos enquanto a pilha não está vazia
	//A exclamação na condição do while faz com que seja usada a condição oposta a que está declarada

	cout << "Tamanho: " << cartas.size() << endl;
	cout << "Nova carta do topo: " << cartas.top() << endl;
	//Mostra-se o tamanho e o elemento do topo da pilha após a última alteração
	
	//AGORA VAMOS CRIAR OUTRA PILHA, QUE UTILIZA ELEMENTOS DO TIPO 'int'
	
	stack <int> numeros;
	
	bingo.push(1);
	bingo.push(2);
	bingo.push(3);
	bingo.push(4);
	
	if(cartas.empty()) { 
	   cout << "Pilha vazia" << endl << endl;
	}else{
	 cout << "Pilha com numeros" << endl << endl;
	}
	//Verificamos se a pilha está vazia ou não com o método "empty()"
	
	cout << "Tamanho: " << numeros.size() << endl;
	cout << "Numero do topo: " << numeros.top() << endl << endl;
	//Mostra-se o tamanho atual e pede-se o numero do topo com os métodos "size()" e "top()" respectivamente
	
	cartas.pop();
	cartas.pop();
	//Retiram-se 2 elementos da pilha com o método "pop()"
	
	cout << "Tamanho: " << numeros.size() << endl;
	cout << "Nova numero do topo: " << numeros.top() << endl << endl;
	//Mostra o tamanho e o elemento do topo após a alteração na pilha
	
	while(!numeros.empty()) {
	 numeros.pop();
	}
	//Comando while utilizado para retirar elementos enquanto a pilha não está vazia
	//A exclamação na condição do while faz com que seja usada a condição oposta a que está declarada

	cout << "Tamanho: " << numeros.size() << endl;
	cout << "Nova numero do topo: " << numeros.top() << endl;
	//Mostra-se o tamanho e o elemento do topo da pilha após a última alteração
	
	return 0;
}

//stack do bingo
