#include<iostream>
#include<string>
using namespace std;

class Carro{
    private:
        string marca;
    public:
        void setMarca(string m){
            marca = m;
        }
        
        string getMarca(){
            return marca;
        }
};

int main(){
    Carro car;
    string x1;
    
    cout << "x1: ";
    cin >> x1;
    // Atribuindo a marca usando o método set
    car.setMarca(x1);
    
    // Obtendo a marca usando o método get e imprimindo
    cout << "Marca do carro: " << car.getMarca() << endl;
    
    return 0;
}
