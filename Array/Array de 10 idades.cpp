#include<iostream>
using namespace std;

int main(){
	int idade[5]; //Criando um array de 5 elementos. Todos os elementos da array tem que ser do mesmo tipo (int e etc)
	int i;
	
	for(i=1; i<6; i++){
		cout << "Digite a idade do aluno" << "[" << i << "]: ";
		cin >> idade[i];
	}
	cout << endl << endl;
	
	cout << "MOSTRANDO AS IDADES DOS ALUNOS" << endl;
	for(i=1; i<6; i++){
		cout << "A idade do aluno" << "[" << i << "] eh: " << idade[i] << endl;
	}
	
	//O método sizeof() vai retornar o tamanho em bits da array. A estrutura 'int' aloca 4 bits de memória
	cout << endl << "Tamanho da array: " << sizeof(idade);
	
	return 0;
}

// #include<cstring> é uma biblioteca p/ string de C