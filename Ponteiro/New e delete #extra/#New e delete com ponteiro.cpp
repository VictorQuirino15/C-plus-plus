#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	//Criamos um array de elementos char, para receber a frase abaixo
	char cad[] = "Universidade Federal da Paraíba";
	int lon = strlen(cad);
	//Declaramos uma variável que recebe o tamanho de 'cad'
	
	//Criamos um ponteiro que recebe o tamanho de lon+1 (11)
	char *ptr = new char[lon+1];
	
	//Copiamos o que tem em 'cad' pra 'ptr' fazendo de 'ptr' uma cópia de 'cad'
	strcpy(ptr,cad);
	
	cout << "ptr " << ptr;
	
	delete[] ptr;
	//Apagamos a memoria relativa a 'ptr'
	//O uso dos colchetes aqui é porque 'ptr' recebeu a memória de um array
}

//Boa prática: verificar se foi alocado o espaço de memoria que precisa antes de utilizar