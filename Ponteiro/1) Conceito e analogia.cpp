#include <iostream>
using namespace std;

int main() {
    int x = 10;       // Declara uma variável inteira x e atribui o valor 10 a ela
    int *ptr;         // Declara um ponteiro para um inteiro

    ptr = &x;         // Atribui o que tem no endereço de memória de x ao ponteiro ptr

    cout << "Valor de x: " << x << endl;
    cout << "Endereco de x: " << &x << endl;
    cout << "Valor apontado por ptr: " << *ptr << endl;
    cout << "Endereco armazenado em ptr: " << ptr << endl;

    return 0;
}

/*
Um ponteiro em C++ é uma variável que armazena o endereço de memória de outra variável. 
Em outras palavras, um ponteiro "aponta" para o local na memória onde outra variável está armazenada. 
Isso permite que você manipule indiretamente o valor da variável, acessando e modificando-a por meio do ponteiro.

Para declarar um ponteiro em C++, você usa o tipo de dado da variável que o ponteiro irá apontar, 
seguido pelo operador de asterisco '*'

Para entender como os ponteiros funcionam, é útil pensar em uma analogia comum: um endereço em uma cidade. 
Suponha que você queira enviar uma carta para um amigo. Você escreve o endereço do seu amigo na carta, e o 
carteiro usa esse endereço para encontrar a casa do seu amigo e entregar a carta. Da mesma forma, um ponteiro 
em C++ "aponta" para a localização de uma variável na memória.

-	&x retorna o endereço de memória da variável x.
-	*ptr retorna o valor armazenado no endereço de memória apontado por ptr.
-	A linha ptr = &x; atribui o endereço de x ao ponteiro ptr.
*/