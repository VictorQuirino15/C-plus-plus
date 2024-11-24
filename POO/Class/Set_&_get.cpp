#include<iostream>
using namespace std;

class Retangulo{		//set e get	
		int x, y;		//Variáveis-membro
	public:
		void setar_valores(int, int);	//Função-membro
		void mostrar_valores(){cout<< "x: " << x << " y: " << y;} //Retorna os valores de X e Y
		int area(){return x*y;} //Calcula a área do Retangulo
		int getX(){return x;}	//Retorna isoladamente o valor de X
		int getY(){return y;}	//Retorna isoladamente o valor de Y
		void setX(int a){x=a;}	//Seta isoladamente X como o valor recebido como 'x2' chamado na main
};

//Lembrando que a função void é usada nesse caso pois não precisamos retornar nada, apenas 'setar'
void Retangulo::setar_valores(int a, int b){
	x = a; 		
	y = b;		//com isso podemos acessar as variáveis do private
}
	
int main(){
	int x1, y1, x2;
	Retangulo Ret; //Instanciamos um objeto da classe Retangulo
	
	cout << "Digite x1: ";
	cin >> x1;
	cout << "Digite y1: ";
	cin >> y1;
	Ret.setar_valores(x1, y1); // o valor armazenado em x1 vai pra 'a' e o de y1 vai para 'b' na classe
	
	cout << endl << "Area: " << Ret.area() << endl;
	
	//Duas funções, mesma resposta. O uso de cada uma vai depender do caso
	cout << "x: " << Ret.getX() << " y: " << Ret.getY() << endl;
	Ret.mostrar_valores();
	
	//Aqui vamos pedir outro valor para x e mudamos com 'setX'
	cout << endl << endl << "Agora mude o valor de x: ";
	cin >> x2;
	Ret.setX(x2); //Vamos setar um novo valor para x1, que agora vai ser x2
	Ret.mostrar_valores();
	cout << endl << "Area: " << Ret.area() << endl; //Mostraremos a nova area agora com x2
	
	return 0;
}