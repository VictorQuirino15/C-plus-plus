#include<iostream>
#include<string>
using namespace std;

class Midia{
    protected:	//Só pode ser acessado dentro desta classe
        string titulo;
        int ano, id;
    public:
        string getTitulo(){return titulo;}
        int getAno(){return ano;}
        int getId(){return id;}
        
        Midia(string t, int a, int i) : titulo(t), ano(a), id(i) {}
};

class Livro : public Midia{
    protected:
        string autor;
    public:
        Livro(string t, int a, int i, string au) : Midia(t, a, i), autor(au){}
        string getAutor(){return autor;}
};

class Revista : public Midia{
    protected:
        int edicao;
    public:
    	Revista(string t, int a, int i, int e) : Midia(t, a, i), edicao(e){}
        int getEdicao(){return edicao;}
};

int main(){
    string titulo, autor;
    int ano, id, edicao;
    
	cout << "Livro" << endl;
	cout << "Digite o titulo: ";
    //cin.ignore();	//Se colocar o cin.ignore() aqui, ele vai remover o primeiro caracter da string digitada
    getline(cin, titulo);    
    cout << "Digite o ano: ";
    cin >> ano;
    cout << "Digite o id: ";
    cin >> id;
    cout << "Digite o autor: ";
    cin.ignore();
	getline(cin, autor);
	Livro livro(titulo, ano, id, autor);
	
	cout << "\nRevista" << endl;
	cout << "Digite o titulo: ";
	cin.ignore();
	getline(cin, titulo); 
    cout << "Digite o ano: ";
    cin >> ano;
    cout << "Digite o id: ";
    cin >> id;
    cout << "Digite o numero da edicao: ";
	cin >> edicao;
	Revista revista(titulo, ano, id, edicao);	
	
	cout << "\nLIVRO" << endl;
	cout << "Titulo: " << livro.getTitulo() << endl; 
	cout << "Ano: " << livro.getAno() << endl;
	cout << "Id: " << livro.getId() << endl;
	cout << "Autor: " << livro.getAutor() << endl;
	
	cout << "\nREVISTA" << endl;
	cout << "Titulo: " << revista.getTitulo() << endl;
	cout << "Ano: " << revista.getAno() << endl;
	cout << "Id: " << revista.getId() << endl;
	cout << "Edicao: " << revista.getEdicao() << endl;
	    
    return 0;
}