#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Produto {
private:
	string nome;
	int codigo;
	float preco;
	int quantidadeEstoque;
public:
	Produto(string nome, int codigo, float preco, int quantidadeEstoque) {
		this->nome = nome;
		this->codigo = codigo;
		this->preco = preco;
		this->quantidadeEstoque = quantidadeEstoque;
 }
 void setNome(string nome) {
 	this->nome = nome;
 }
 void setCodigo(int codigo) {
 	this->codigo = codigo;
 }
 void setPreco(float preco) {
 	this->preco = preco;
 }
 void setQuantidadeEstoque(int quantidadeEstoque) {
	this->quantidadeEstoque = quantidadeEstoque;
 }
 string getNome() {
 	return this->nome;
 }
 int getCodigo() {
 	return this->codigo;
 }
 float getPreco() {
 	return this->preco;
 }
 int getQuantidadeEstoque() {
 	return this->quantidadeEstoque;
 }
 
void imprimirInformacoes() {
	cout << "Nome: " << nome << endl;
	cout << "Código: " << codigo << endl;
	cout << "Preço: R$" << preco << endl;
	cout << "Quantidade em estoque: " << quantidadeEstoque << endl;
 }
};

class GerenciadorProdutos {
	private:
	 vector<Produto> produtos;
	public:
	 void cadastrarProduto(Produto produto) {
	 produtos.push_back(produto);
	 }
	Produto buscarProduto(int codigo) {
	for (const Produto& produto : produtos) {
	if (produto.getCodigo() == codigo) {
		return produto;
	}
}
	// Retorna um produto inválido se não encontrar nenhum com o código especificado
	return Produto("", -1, -1, -1);
	}
};
int main() {
	 GerenciadorProdutos gerenciador;
	 
	 // Cadastro de produtos
	 Produto p1("Camisa", 123, 49.99, 100);
	 Produto p2("Calça Jeans", 456, 79.99, 50);
	 gerenciador.cadastrarProduto(p1);
	 gerenciador.cadastrarProduto(p2);
	 
	 // Busca de produto pelo código
	 int codigoBusca = 123;
	 Produto produtoEncontrado = gerenciador.buscarProduto(codigoBusca);
	 
	 // Verificação se o produto foi encontrado
	 if (produtoEncontrado.getCodigo() != -1) {
	 cout << "Produto encontrado:" << endl;
	 produtoEncontrado.imprimirInformacoes();
	 } else {
	 cout << "Produto com código " << codigoBusca << " não encontrado." << endl;
	 }
	 
 return 0;