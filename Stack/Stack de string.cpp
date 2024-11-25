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
	
	return 0;
}

/*
https://www.youtube.com/watch?v=mGLtyCOJe4A&t=1s
https://www.youtube.com/watch?v=r4R9or_pn2E

1) O QUE É A PILHA? - CONCEITO

Se compara a um vetor; é uma estrutura de armazenamento de dados, no qual o primeiro elemento ao entrar na 
pilha é o último elemento a sair da pilha e o último elemento a entrar na pilha é o primeiro a sair da pilha.

- Analogia: 
Imagine um tubo com um fundo fechado e outro aberto. Nesse tubo entram bolas, uma por uma. Ao retirar essas 
bolas, a última a ser posta no tubo é a primeira a sair e assim sucessivamente até chegar na primeira bola 
colocada no tubo, no qual se torna a última a ser retirada.


	ILUSTRAÇÃO					|	COLOCANDO AS BOLAS					|	DEPOIS DE SEREM RETIRADAS
								|	NO TUBO 							|	
								|		(Lá ele)						|		
____   ____	o O 0 º  << BOLAS	|	____   ___							|	 º 0 O o____   ___
	| |							|		|º|		4º a ser posta			|				| |	
	| |				<< TUBO		|		|0|		3º a ser posta			|				| |
	| |							|		|O|		2º a ser posta			|				| |
	|_|							|		|o|		1º a ser posta			|				|_|
 								|										|
 								

2) COMO FUNCIONA?

Para utilizar essa estrutura precisamos primeiro incluir a biblioteca com "#include<stack>". Logo mais, dentro
do 'int main' montamos a estrutura da pilha (linha 8 e 9)...

3) MÉTODOS

Ao se tratar de pilhas, podemos analisar algumas características dessa estrutura, como o elemento do topo
se está vazia, retirar ou adicionar elementos e dentre outros. Para isso utilizamos o que chamamos de métodos.
Métodos são "funções" para atribuir alguma tarefa. Vejamos alguns deles:

push();  // Adiciona elementos a pilha
pop();   // Retira elementos da pilha
size();  // Retorna o tamanho da pilha com o total de elementos
empty(); // Retorna V ou F caso a pilha estiver vazia
swap();  // Troca os elementos da pilha com os de outra pilha

4) HÁ OUTRO MÉTODO PARA VERIFICAR SE AS PLHAS ESTÃO VAZIA?
Sim, o outro método para verificar se as pilhas estão vazias é:

if(cartas.size() == 0) { 
   cout << "Pilha vazia" << endl;
}else{
 cout << "Pilha com cartas" << endl;
}

*/