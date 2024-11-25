#include<iostream>
#include<stack> //Biblioteca usada para usar a estrutura da pilha
using namespace std;

int main()
{
	stack <int> numbers;
	
	cout << "Size: " << numbers.size() << endl ;
	
	numbers.push(10);
	numbers.push(11);
	numbers.push(12);
	numbers.push(13);
	
	cout << "Size: " << numbers.size() << endl;
	
	if(numbers.empty()){
		cout << "The stack is empty" << endl;
	}
	else if (!numbers.empty()){
		cout << "The stack is not empty" << endl;
	}
	
	stack <int> other_stack;
	
	other_stack.push(4);
	
	other_stack.swap(numbers);
	//O comando 'swap()' troca os elementos de cada pilha
	
	cout << "Other stack size: " << other_stack.size() << endl;
	cout << "Numbers size: " << numbers.size() << endl;
	
	
	return 0;
}

/*
	int popped_value = numbers.top();
	cout << popped_value;
*/