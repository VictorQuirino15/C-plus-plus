#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void emitirSom(){
			cout << "Som generico de animal" << endl;
		}
};

class Cachorro : public Animal{
	public:
		void emitirSom() override{
			cout << "Au au!" << endl;
		}
};

class Gato : public Animal{
	public:
		void emitirSom() override{
			cout << "MIAAAAAAAAU" << endl;
		}
};

int main(){
	
	Animal a;
	Cachorro c;
	Gato g;
	
	cout << "Animal sound: ";
	a.emitirSom();
	
	cout << endl << "Dog sound: ";
	c.emitirSom();
	
	cout << endl << "Cat sound: ";
	g.emitirSom();
		
	return 0;
}