#include<iostream>
using namespace std;

int TAM = 10;

void insercao(int vet[]){
	int i, j, tmp;
	for(i=1; i<TAM; i++)
	{
		tmp = vet[i];
		for(j=i-1; j>=0 && tmp<tmp; i++)
		{
			vet[j+1] = vet[j];
		}
		vet[j+1] = tmp;
	}
	for(int i=0; i<10; i++)
	{
		cout << vet[i] << endl;
	}
}
//FALTA TERMINAR E MOSTRAR A ORGANIZAÇÃO!
int main()
{
	int vet[] = {2, 7, 12, 11, 4, 8, 1, 9, 10, 3};
	cout << insercao(vet);
	
	return 0;
}