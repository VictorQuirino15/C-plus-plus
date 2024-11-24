#include <iostream>
#include <string> // fornece a classe string que contém diversas funções e operações com strings
// Lembre-se #include <cstring> fornece funções que atuam em c_str, como strlen, strcpy, ...
using namespace std;

class Pessoa {
	private:
	    string nome;
	public:
	    Pessoa() {
	        nome = "None None None";
	    }
	
	    void setNome(string X) {
	        nome = X;
	    }
	
	    string getNome() {
	        return nome;
	    }
	
	    void compare(Pessoa Y) {
	        if (this->nome == Y.nome) {
	            cout << "Nomes iguais" << endl;
	        } else {
	            cout << "Nomes diferentes" << endl;
	        }
	    }
};

int main() {
    Pessoa A, B;
    A.setNome("Guilherme");
    B.setNome("Leticia");

    cout << A.getNome() << endl;
    cout << B.getNome() << endl;

    A.compare(B);
    
    B.setNome("Guilherme");
    B.compare(A);
    
    return 0;
}
