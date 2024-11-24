#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> numeros;
	
	numeros.push_back(1);
	numeros.push_back(2);
	numeros.push_back(3);
	
	cout << "tamanho: " << numeros.size() << endl << endl;
	
	for(int i=0; i<numeros.size(); i++){
		cout << "elemento[" << i << "]: " << numeros[i] << endl;
	}
	cout << endl;
	numeros.erase(numeros.begin() + 1);
	
	for(int i=0; i<numeros.size(); i++){
		cout << "elemento[" << i << "]: " << numeros[i] << endl;
	}
	cout << endl;
	
	vector<int> number = {10, 20, 30, 40};
    
    cout << "elementos de number: ";
    for(const auto& num : number){
		cout << num << " ";
	}
	
	numeros.swap(number);
	cout << endl << endl;
	
	cout << "TROCA:" << endl << "Numeros" << endl;
	for(const auto& num : numeros){		//forma de contornar o uso de begin e end, muito mais fácil
		cout << num << endl;
	}
	
	cout << endl << "Number" << endl;
	for(const auto& numb : number){
		cout << numb << " ";
	}
	
	number.clear();
	cout << endl << endl;
	cout << "Tamnho de number apos clear: " << number.size();
	
	if(!number.empty()){
		number.clear();
		cout << endl << "Number nao estava vazio, mas agora foi esvaziado";
	}else{
		number.push_back(1);
		cout << endl << endl << "Number estava vazio, adicionamos um elemento a ele";
		cout << endl << "Tamanho de number agora: " <<  number.size();
	}

	
}