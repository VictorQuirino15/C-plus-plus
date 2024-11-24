#include<iostream>
#include<cstring> //<cstring> é uma biblioteca para string de C
using namespace std;

int main()
{	
	char lista[] = "ufpb"; //lista = "ufcg";  //Não permitido
	cout << lista << endl;
	
	strcpy(lista, "UFPB"); //Copia a string "UFPB" em 'lista'
	cout << lista << endl;
	
	lista[3] = 'E';		   //Troca o elemento [3] (a 4º letra) por 'E'
	cout << lista << endl;
	
	return 0;
}