#include<iostream>
using namespace std;

class Retangulo{
		int x, y;
	public:
		void set(int a, int b){x=a; y=b;}
		int area(){return x*y;}
};

int main(){
	int i;
	
	cout << "Digite quantos retangulos deseja criar: ";
	cin >> i;
	Retangulo *Ret = new Retangulo[i]; //Só podem ser criados sem fornecer um construtor explícito 
	
	for(int j=1; j<i+1; j++){
		int x, y;
		
		cout << endl << "Digite x" << j << ": ";
		cin >> x;
		cout << "Digite y" << j << ": ";
		cin >> y;
		Ret[j].set(x,y);
	}
	
	for(int j=1; j<i+1; j++){
		cout << endl << "Area[" << j << "]: " << Ret[j].area();
	}
	
	delete[] Ret;
	return 0;
}