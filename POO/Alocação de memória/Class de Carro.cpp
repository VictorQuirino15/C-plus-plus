#include <iostream>
#include <string>
using namespace std;

class Carro {
private:
    string marca;
    string modelo;
    int ano;

public:
    Carro() {
        marca = "";
        modelo = "";
        ano = 0;
    }

    Carro(string m, string mod, int a) {
        marca = m;
        modelo = mod;
        ano = a;
    }

    void setCarro(string m, string mod, int a) {
        marca = m;
        modelo = mod;
        ano = a;
    }

    void mostrarInfo() {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Ano: " << ano << endl;
    }
};

int main() {
    // Criando um array de objetos Carro com tamanho variável em tempo de execução
    int tamanho;
    cout << "Quantos carros deseja criar? ";
    cin >> tamanho;

    Carro carros[tamanho];

    // Usando os objetos do array
    for (int i = 0; i < tamanho; i++) {
        string marca, modelo;
        int ano;

        cout << "Informe a marca do carro " << i+1 << ": ";
        cin >> marca;

        cout << "Informe o modelo do carro " << i+1 << ": ";
        cin >> modelo;

        cout << "Informe o ano do carro " << i+1 << ": ";
        cin >> ano;

        carros[i].setCarro(marca, modelo, ano);
    }

    // Mostrando as informações dos carros
    for (int i = 0; i < tamanho; i++) {
        carros[i].mostrarInfo();
    }

    // Liberando a memória alocada
    //delete[] carros;

    return 0;
}
