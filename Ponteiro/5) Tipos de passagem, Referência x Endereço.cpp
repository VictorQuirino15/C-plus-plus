#include <iostream>
using namespace std;
void incrementa_referencia(int &t);
void incrementa_endereco(int *t);

int main () {
	int t = 3;					//Valor inicial de t = 3
	
	incrementa_referencia(t);	//Valor atual de t = 4
	cout << t << endl;
	
	incrementa_endereco(&t);	//Valor atual de t = 5
	cout << t << endl;
}

void incrementa_referencia(int &x){
x++;
}

void incrementa_endereco(int *y){
(*y)++;
}

/*
Ao chamar a função "incrementa_referencia", o valor de t é incrementado 1 vez e então o valor da variável é modificado de 3 para 4,
de forma direta; logo após é chamada a função "incrementa_endereço", a qual incrementa 1 vez o valor atual de t, que agora é modificado
de forma indireta, de 4 para 5

A explicação sobre essas 2 passagem é um tanto confusa, recomendo jogar no chatGPT e perguntar qual o uso,lógica e quando usar

1) Passagem por valor

Chama a função >> faz uma cópia do parâmetro
Se alterar valor na função, fora dela volta ao normal (só alterou a cópia e não a variável original)

2) Passagem por endereço

também conhecido por passagem por endereço
contrário de 1)

exemplo de 1) e 2) :
void troca1(int x, int y);
void troca2(int& x, int& y);
*/
