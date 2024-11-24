#include<iostream>
#include<string>
using namespace std;

class Funcionario{
	private:
		string nome;
		int id;
		float salario;
		float aumento;
	public:
		void setParametros(string, int, float);
		string getNome(){return nome;}
		int getId(){return id;}
		float getSalario(){return salario;}
		float aumentarSalario(float aumento){return salario + (salario*aumento);}	
		
		Funcionario(string nome, int id, float salario){
			this->nome = nome;
			this->id = id;
			this->salario = salario;
		}
		
		void setNome(string nome){
			this->nome = nome;
		}
		
		void setId(int id){
			this->id = id;
		}
		
		void setSalario(float salario){
			this->salario = salario;
		}
		
		void setAumento(float aumento){
			this->aumento = aumento;
		}
		
		void imprimirInformacoes(){
			cout << "Nome: " << nome << endl;
			cout << "Id: " << id << endl;
			cout << "Salario: " << salario << endl;
		}
};

class Gerente : public Funcionario{
	private:
		string departamento;
	public:
		//Construtor da classe gerente
		Gerente (string nome, int id, float salario, string departamento)
			: Funcionario(nome, id, salario), departamento(departamento){}
		
		string getDepartamento(){return departamento;}
		
		void imprimirInformacoes() override { //'override' sobrescreve a função. Mais informaçãoes no final!
			cout << "Nome: " << nome << ", Id: " << id << ", Salario: " << salario << ", Departamento: " << departamento;
		}
		
		Gerente (string departamento){
			this->departamento = departamento;
		}
		
		void setDepartamento(){
			this->departamento = departamento;
		}
		
		string getDepartamento(){return departamento;}	
};

class GerenciadorFuncionarios(){
	private:
		vector<Funcionarios> funcionarios;
	public:
		void cadastrarFuncionarios(Funcioario funcionario){
			funcionarios.push_back(funcionario);
		}
		
		Funcionario buscarFuncionario(int id) {         
			for (const Funcionario& funcionario : funcionarios) {             
				if (produto.getId() == id) {                 
					return funcionario;             
				}         
			}         
			// Retorna um produto inválido se não encontrar nenhum com o código especificado         
			return Funcionario("", -1, -1, -1);     
		} 
};

int main(){
	GerenciadorFuncionarios gerenciador;
	
	// (nome, id, salario)
	Funcionario funcionario1("Victor", 20220027617, 700);
	Funcionario funcionario2("Arthur", 20220102794, 700);
	//Gerente gerente("Ademar", 01, 10000, "Professor");
	gerenciador.cadastrarFuncionario(funcionario1);
	gerenciador.cadastrarFuncionario(funcionario2);
	
	 // Busca de produto pelo código     
	 int idBusca = 123;     
	 Funcionario funcionarioEncontrado = gerenciador.buscarFuncionario(idBusca);      
	 
	 // Verificação se o produto foi encontrado     
	 if (funcionarioEncontrado.getId() != -1) {         
	 	cout << "Funcionario encontrado:" << endl;         
		funcionarioEncontrado.imprimirInformacoes();     
	} else {         
		cout << "Funcionario com id " << idBusca << " não encontrado." << endl;     
	} 
	
	return 0;
}

/*
A função 'override' sobrescreve uma função, para que só precise instaciar uma única função, podendo dar novos
atributos em cada class, para poder reutilizar uma função, para evitar ter mais de uma função com o mesmo objetivo,
podendo então sobreescrever o que tinha dentro dela. Dessa forma usa-se menos linhas de código
*/