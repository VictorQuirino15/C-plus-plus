#include<cmath>
#include<iostream>
using namespace std;

int soma (int, int);

int main(){
float X, Y;

cout << "Digite um dado numerico: ";
cin >> X;
X =  pow(X,2);
cout << "Digite um outro dado numerico: ";
cin >> Y;
Y =  pow(Y,2);
cout << "\n X.X + Y.Y = " << soma(X,Y) << "\n\n";
cout<<"A raiz da soma dos quadrados eh: " << sqrt(soma(X,Y));

return 0;
}

int soma(int a, int b){
return a + b;
}