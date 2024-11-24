#include<iostream>
#include<vector>
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
	
	vector<Animal *> animais;
	
	Animal bicho;
	Cachorro cachorro;
	Gato gato;
	Macaco macaco;
	
	animais.push_back(&bicho);
	animais.push_back(&gato);
	animais.push_back(&gato);
	animais.push_back(&macaco);

	//For que percorre todos os elementos da class 'Animal' e seu objeto 'animais'
	//Percorrendo o vetor e identificando o tipo de animal
	for (auto animal : animais){
		if(typeid(*animal) == typeid(animal)){	//'typeid' serve para comparar um tipo de função com outra
			cout << "Animal qualquer" << endl;
			cout << "Tipo: " << typeid(*animal).name() << endl; // "Tipo: (tamanho)tipo do animal"
			
		}
		else if(typeid(*animal) == typeid(cachorro)){
			cout << "Cachorro" << endl;
			cout << "Tipo: " << typeid(*animal).name() << endl; 
		}
		else if(typeid(*animal) == typeid(gato)){
			cout << "Gato" << endl;
			cout << "Tipo: " << typeid(*animal).name() << endl;
		}
		else if(typeid(*animal) == typeid(macaco)){
			cout << "Macaco" << endl;
			cout << "Tipo: " << typeid(*animal).name() << endl;
		}
		else {
			cout << "Animal desconhecido" << endl;
		}
		Animal->emitirSom();
	}
	
	//Instanciando objetos para a 'emitirSom()'
	bicho.emitirSom();
	cachorro.emitirSom();
	gato.emitirSom();
	macaco.emitirSom();
	
	//Enviando a função 'ouvirSom()' para cada class
	ouvirSom(&bicho);
	ouvirSom(&cachorro);
	ouvirSom(&gato);
	ouvirSom(&macaco);
	
	return 0;
}

