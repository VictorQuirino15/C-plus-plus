#include<iostream>
#include<string>
using namespace std;

class Pessoa{
	private:
		string nome;
	public:
		void setNome(string nome){this->nome = nome;}
		
		string getNome(){return nome;}
		
		void compare(Pessoa X){
			if(this->nome == X.nome){
				cout << endl << "Nomes iguais";
			}else{
				cout << endl << "Nomes diferentes";
			}
		}
};

int main(){
	Pessoa p1, p2;
	string nome1, nome2, nome3;
	
	cout << "Digite o nome da pessoa 1: ";
	cin >> nome1;
	cout << "Digite o nome da pessoa 2: ";
	cin >> nome2;
	
	p1.setNome(nome1);
	p2.setNome(nome2);
	
	cout << endl << "Nome de p1: " << p1.getNome();
	cout << endl << "Nome de p2: " << p2.getNome();
	
	cout << endl << "Agora mude o nome da pessoa 2: ";
	cin >> nome3;
	
	p2.setNome(nome3);
	p1.compare(p2);   
	
	
	return 0;
}