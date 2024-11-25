#include <iostream>
using namespace std;

int main(){
	
	int *ptr[5];
	int valorA = 2;
	int valorB = 1;
	int valorC = 5;
	int valorD = 8;
	int valorE = 3;
	
	ptr[0] = &valorA;
	ptr[1] = &valorB;
	ptr[2] = &valorC;
	ptr[3] = &valorD;
	ptr[4] = &valorE;
	
	for(int i = 0; i < 5; i++)
		cout << *ptr[i] << endl;
}
