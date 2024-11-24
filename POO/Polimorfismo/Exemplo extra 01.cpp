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

class Macaco : public Animal{
	public:
		void emitirSom() override{
			cout << "UH UH AH AH MIM DE BANANA" << endl;
		}
};

void emitirSom(Animal* bicho){
		bicho->emitirSom();
	}

int main(){
	
	Animal bicho;
	Cachorro cachorro;
	Gato gato;
	Macaco macaco;
	
	bicho.emitirSom();
	cachorro.emitirSom();
	gato.emitirSom();
	macaco.emitirSom();
	
	ouvirSom(&cachorro);
	ouvirSom(&gato);
	ouvirSom(&macaco);
	
	return 0;
}

