#include<iostream>
#include<windows.h>
using namespace std;

//Se fosse usado 'troca2(2,y)' daria erro, pois o '2' não está armazenado na memória

void troca1(int x, int y);
void troca2(int& x, int& y);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int x=4, y=7;
	
	cout<<x<<" "<<y<<endl;
	troca1(x,y);
	cout<<x<<" "<<y<<endl;
	troca2(x,y);
	cout<<x<<" "<<y<<endl;
	return 0;
}

void troca1(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void troca2(int& x, int& y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}