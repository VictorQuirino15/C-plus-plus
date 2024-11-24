#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Produto{
	private:
		string nome;
		int codigo;
		float preco;
		int quantidade;
	public:
		
		Produto(string n, int c, float p, int q) : nome(n), codigo(c), preco(p), quantidade(q) {}
		
		int getCodigo(){return codigo;}
		
		void consulta(int codigoConsultado){
			if(codigo == codigoConsultado){
				cout << "Produto encontrado!\n\n";
				imprimir();
			}
		}
		
		void imprimir(){
			cout << endl << "PRODUTOS CADASTRADOS" << endl;
			cout << "Nome: " << nome << endl;
 			cout << "Codigo: " << codigo << endl;
 			cout << "Preco: RS" << preco << endl;
			cout << "Quantidade em estoque: " << quantidade << endl;
		}
		
		void atualizarEstoque(int novaQuantidade){
			quantidade = novaQuantidade;
			cout << endl << "Estoque atualizado." << endl;
			imprimir();
		}
};

int main(){
	string nome;
	int codigo;
	float preco;
	int quantidade;
	vector<Produto> produtos;
	char continuar;
	int escolha;
	
	do{
		cout << "SUPER FACIL" << endl;
		cout << "Menu de opcoes. Escolha uma!" << endl << endl;
		cout << "1-Cadastro\n" << "2-Consulta de produto\n" << "3-Atualizacao de estoque\n" << endl;
		cin >> escolha;
		
		switch(escolha){
			case 1:
				cout << "CADASTRO DE PRODUTOS" << endl;
				cout << "Digite o nome do produto: ";
				cin >> nome;
				cout << "Digite o codigo do produto: ";
				cin >> codigo;
				cout << "Digite o preco do produto: ";
				cin >> preco;
				cout << "Digite a quantidade em estoque do produto: " << endl;
				cin >> quantidade;
				produtos.push_back(Produto(nome, codigo, preco, quantidade));
				break;
				
			case 2:
				cout << "CONSULTA DE PRODUTOS" << endl;
				cout << "Digite o codigo do produto: ";
				cin >> codigo;
				for(Produto &produto : produtos){
					produto.consulta(codigo);
				}	
				break;
				
			case 3:
				cout << "ATUALIZACAO DE ESTOQUE" << endl;
				cout << "Digite o codigo do produto: ";
				cin >> codigo;
				cout << "Digite a nova quantidade em estoque do produto: " << endl;
				cin >> quantidade;
				for(Produto &produto : produtos){
					if(produto.getCodigo() == codigo){
						produto.atualizarEstoque(quantidade);
						break;
					}
				}
				break;
		}	
		
		cout << "Quer voltar ao menu? [s/n]" << endl;
		cin >> continuar;
		
	}while(continuar == 's' || continuar == 'S');
	
	
	return 0;
}
