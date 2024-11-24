#include<iostream>
using namespace std;

int main()
{
	int *ptr[4];
	int A = 1;
	int B = 10;
	int C = 20;
	int D = 30;
	
	ptr[0] = &A;
	ptr[1] = &B;
	ptr[2] = &C;
	ptr[3] = &D;
	
	for(int i = 0; i < 4; i++) 
		cout << *ptr[i] << endl;
	
}