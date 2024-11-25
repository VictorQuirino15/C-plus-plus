#include <iostream>
#include <stack>
using namespace std;

class Pilha {
private:
    stack<int> arquivo;

public:
    void empilhar(int dado) {
        arquivo.push(dado);
    }

    void desempilhar() {
        if (!arquivo.empty()) {
            arquivo.pop();
        } else {
            cout << "Erro: Pilha vazia. Nenhum elemento para desempilhar." << endl;
        }
    }

    int topo() {
        if (!arquivo.empty()) {
            return arquivo.top();
        } else {
            cout << "Erro: Pilha vazia. Nenhum elemento no topo." << endl;
            return -1; // Retorna um valor inválido para indicar um erro
        }
    }

    bool vazia() {
        return arquivo.empty();
    }

    int tamanho() {
        return arquivo.size();
    }
};

int main() {
    Pilha minhaPilha;

    minhaPilha.empilhar(10);
    minhaPilha.empilhar(20);
    minhaPilha.empilhar(30);

    cout << "Topo da pilha: " << minhaPilha.topo() << endl;
    cout << "Tamanho da pilha: " << minhaPilha.tamanho() << endl;

    minhaPilha.desempilhar();

    cout << "Novo topo da pilha: " << minhaPilha.topo() << endl;
    cout << "Tamanho atual da pilha: " << minhaPilha.tamanho() << endl;

    return 0;
}
