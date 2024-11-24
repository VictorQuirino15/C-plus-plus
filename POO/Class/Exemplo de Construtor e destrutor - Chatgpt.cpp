#include <iostream>
using namespace std;

class MinhaClasse {
private:
    int valor;

public:
    // Construtor com parâmetro
    MinhaClasse(int v) {
        valor = v;
        cout << "Construtor chamado. Valor = " << valor << endl;
    }

    // Construtor vazio
    MinhaClasse() {
        valor = 0;
        cout << "Construtor vazio chamado. Valor = " << valor << endl;
    }

    // Destrutor
    ~MinhaClasse() {
        cout << "Destrutor chamado. Valor = " << valor << endl;
    }

    void setValor(int v) {
        valor = v;
    }

    int getValor() {
        return valor;
    }
};

int main() {
    // Criação de objetos usando os construtores
    MinhaClasse objeto1(10); // Chamando o construtor com parâmetro
    MinhaClasse objeto2;      // Chamando o construtor vazio

    // Exibindo o valor de objeto2 antes de mudar o valor
    cout << "Valor do objeto2 antes de mudar: " << objeto2.getValor() << endl;

    // Alterando o valor do objeto2
    objeto2.setValor(5);		//Ao mudar o valor de objeto2, o destrutor vai destruir o valor FINAL que ele possui

    // Exibindo os valores dos objetos
    cout << "Valor do objeto1: " << objeto1.getValor() << endl;
    cout << "Valor do objeto2: " << objeto2.getValor() << endl;

	delete Ret1;
	delete Ret2;
    return 0;
}
