#include <iostream>
#include <cstdlib> //Biblioteca que importa a função rand()
#include <ctime>   //Biblioteca que importa a função time, essencial pra rolar novos números na rand()
using namespace std;

int main()
{
    unsigned seed = time(0); //Declarando a seed (semente do tempo desejado)

    srand(seed);
    cout<<rand()%60<<endl; // o '%60' restringe o intervalo dos numeros sorteados, no caso [0,60]

    return 0;
}