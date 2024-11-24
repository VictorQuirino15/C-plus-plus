#include<iostream>
using namespace std;

int main(){
	float tabela[2][4];	//2 linhas e 4 colunas
	
	//O usuario vai digitar os valores pra cada espaço da tabela
	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++)
			cin >> tabela[i][j];
	}
	cout << endl;
		
	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++)
			cout << tabela[i][j] << " "; //Vai printar a tabela
		cout << endl; //Assim que acaba o 2º for, ele pula uma linha e executa o '2º round' do 1º for
	}
	return 0;
}