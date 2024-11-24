#include <iostream>
using namespace std;

class Retangulo {
    int x, y;

public:
    Retangulo() {} // Construtor padrão
    Retangulo(int a, int b) {
        x = a;
        y = b;
    }
    int area() { return x * y; }
};

int main() {
    int i, a, b;
    cout << "Quantos objetos retângulo deseja criar?" << endl;
    cin >> i;

    Retangulo *Ret = new Retangulo[i];
    for (int j = 0; j < i; j++) {
        cout << "Digite o valor de a: ";
        cin >> a;
        cout << "Digite o valor de b: ";
        cin >> b;
        Ret[j] = Retangulo(a, b);
    }

    for (int j = 0; j < i; j++)
        cout << "Área[" << j << "] = " << Ret[j].area() << endl;

    delete[] Ret;
    return 0;
}
