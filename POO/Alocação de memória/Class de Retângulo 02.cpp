#include <iostream>
using namespace std;

class Retangulo {
    int x, y;
public:
    Retangulo() {
        x = 5;
        y = 5;
    }
    
    int area() {
        return x * y;
    }
};

int main() {
    int i;
    cout << "Quantos objetos retangulo deseja criar? ";
    cin >> i;
    Retangulo *Ret = new Retangulo[i];
    
    for (int j = 0; j < i; j++) {
        cout << endl << "Area" << "[" << j << "] = " << (Ret+j)->area();
    }

    delete[] Ret;
    return 0;
}
