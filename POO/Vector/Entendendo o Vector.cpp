#include <iostream>
#include <vector>	//Incluindo a biblioteca específica das funcionalidades do vector
using namespace std;

int main() {
    // Criando um vector vazio
    vector<int> vec;			//vector<tipo> nome;

    // Adicionando elementos ao vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);		//Tamanho atual do vector: 3 //elementos: {10, 20, 30}

    // Acessando elementos do vector usando índices
    cout << "Elemento 1: " << vec[0] << endl;
    cout << "Elemento 2: " << vec[1] << endl;
    cout << "Elemento 3: " << vec[2] << endl;

    // Iterando sobre o vector
    cout << "Todos os elementos do vetor: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
EXPLICAÇÕES SOBRE VECTOR:

Vector tem um tamanho dinâmico, ou seja, pode crescer continuamente à medida que mais elementos 
são adicionados a ele. Não é necessário especificar o tamanho do vetor no momento da criação, pois
à medida que recebe elementos, sua capacidade é aumentada automaticamente.

Uma exemplificação maior do uso de vector foi posta no arquivo 'teste 01', sem utilizar os 'métodos adicionais'.

MÉTODOS DO VECTOR:

push_back() - Adiciona um elemento ao vector
swap()  - permite a troca do conteúdo entre 2 vectores
erase() - apaga o(s) elemento(s) específico(s) do vector
clear() - apaga todos os elementos do vector
empty() - verifica se o conteiner está vazio
size()  - retorna o tamanho do conteiner
front() - retorna o primeiro elemento do vector
back()  - retorna o primeiro elemento do vector

(métodos "adicionais")
data()  - retorna um ponteiro para o array subjacente ao vetor. Isso significa que ela fornece acesso 
        direto aos dados armazenados no vetor, permitindo manipular o vetor como se fosse um array.
        
resize()- permite redimensionar o vetor para conter um número específico de elementos, e opcionalmente 
         preencher os novos elementos com um valor específico. Quando você precisa redimensionar um 
		 vetor para conter um número específico de elementos. Quando você deseja preencher os novos 
		 elementos com um valor específico. Quando você precisa reduzir o tamanho do vetor, eliminando 
		 elementos extras no final, são as opções de uso de resize

begin() - retorna um interador para o primeiro elemento do vector //contornamos isso usando o for com 'auto' nos exemplos de 'teste01'
end()   - retorna um interador para o último elemento do vector   //contornamos isso usando o for com 'auto' nos exemplos de 'teste01'
