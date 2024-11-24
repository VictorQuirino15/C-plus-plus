#include <iostream>
#include <string>

using namespace std;

// Classe Base
class Veiculo {
protected:
    string marca;
    int ano;

public:
    Veiculo(string m, int a) : marca(m), ano(a) {}

    void mostrarMarca() {
        cout << "Marca: " << marca << endl;
    }

    void mostrarAno() {
        cout << "Ano: " << ano << endl;
    }
};

// Classe Derivada Carro
class Carro : public Veiculo {
private:
    int numPortas;

public:
    Carro(string m, int a, int np) : Veiculo(m, a), numPortas(np) {}

    void mostrarNumPortas() {
        cout << "Número de portas: " << numPortas << endl;
    }
};

// Classe Derivada Moto
class Moto : public Veiculo {
public:
    Moto(string m, int a) : Veiculo(m, a) {}

    void mostrarTipo() {
        cout << "Tipo: Moto" << endl;
    }
};

int main() {
    Carro c("Ford", 2020, 4);
    cout << "Carro:" << endl;
    c.mostrarMarca();
    c.mostrarAno();
    c.mostrarNumPortas();

    Moto m("Honda", 2021);
    cout << "\nMoto:" << endl;
    m.mostrarMarca();
    m.mostrarAno();
    m.mostrarTipo();

    return 0;
}
